#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE , *PNODE, **PPNODE;

void Insert(PPNODE Head , int no)
{
	PNODE temp = *Head;
	PNODE newn = new NODE;
	
	newn -> data = no;
	newn -> lchild = NULL;
	newn -> rchild = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(1)		//Unconditional loop  for(;;) ,while(true),while(1)
		{
			if(temp -> data == no)
			{
				cout<<"Dplicate node\n";
				
				delete newn;
				break;
			}
			else if(no < (temp -> data))  // lahan data
			{
				if(temp -> lchild == NULL)
				{
					temp -> lchild = newn;
					break;
				}
				temp = temp -> lchild;
			}
			else if( no > (temp -> data))	// mota data
			{
				if(temp -> rchild == NULL)
				{
					temp -> rchild = newn;
					break;
				}
				temp = temp -> rchild;
			}
		}
	}
}

bool Search(PNODE Head , int no)
{
	if(Head == NULL)		// tree is empty
	{
		return false;
	}
	else 					// tree contain atleast one node
	{
		while(Head != NULL)
		{
			if(Head -> data == no)  //node sapadla
			{
				break;
			}
			else if(no > (Head -> data))
			{
				Head = Head -> rchild;
			}
			else if(no < (Head -> data))
			{
				Head = Head -> lchild;
			}
		}
	}

		if(Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
}

int Count(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		iCnt++;
		Count(Head -> lchild);
		Count(Head -> rchild);
	}
	return iCnt;
}

int main()
{
	int no = 0;
	bool bret = false;
	int iRet = 0;
	
	PNODE first = NULL;
	
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	
	cout<<"Enter number to search \n";
	cin>>no;
	
	bret = Search(first,no);
	if(bret == true)
	{
		cout<<"Data is there\n";
	}
	else
	{
		cout<<"Data is not there \n";
	}
	
	iRet = Count(first);
	cout<<"Number of nodes : "<<iRet;
	return 0;
}


/*
Output of program

E:\LB_17\Project>Myexe
Enter number to search
10
Data is not there
Number of nodes : 3
*/