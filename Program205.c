#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head , int no)
{
	PNODE newn = NULL;
	
	//Step 1 : Allocate Memory
	newn = (PNODE)malloc(sizeof(NODE));
	
	//Step 2 : Initialize the node
	newn->data = no;
	newn->next = NULL;
	
	//Step 3 : Insert the node
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> next =*Head;
		*Head = newn;
	}
}

void InsertLast(PPNODE Head , int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	
	//Step 1 : Allocate Memory
	newn = (PNODE)malloc(sizeof(NODE));
	
	//Step 2 : Initialize the node
	newn->data = no;
	newn->next = NULL;
	
	//Step 3 : Insert the node
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp->next = newn;
	}
}



void DeleteFirst(PPNODE Head)
{
	PNODE temp = *Head;
	
	if(*Head != NULL) // if LL contains atleast one node
	{
		*Head = (*Head) -> next;
		free(temp);
	}
}



void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	
	if(*Head == NULL) // LL is Empty
	{
		return;
	}
	else if((*Head)-> next ==NULL) // LL contains one node
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
			
		}
		free(temp -> next);
	}
	temp -> next = NULL;
}


void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t",Head->data);
		Head = Head -> next;
	}
	printf("\n");
}


int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	return iCnt;
}



int main()
{
	PNODE first = NULL;
	int iRet = 0;
	 
	InsertFirst(&first,101); 
	InsertFirst(&first,51); //InsertFirst(50,51);
	InsertFirst(&first,21); //InsertFirst(50,21);
	InsertFirst(&first,11); //InsertFirst(50,11);
	
	InsertLast(&first,111);
	Display(first);
	iRet = Count(first);
	printf("\n Number of elements are : %d\n",iRet);
	
	DeleteFirst(&first);
	Display(first);
	
	iRet = Count(first);
	printf("\n Number of elements are : %d\n",iRet);
	
	DeleteLast(&first);
	Display(first);
	
	iRet = Count(first);
	printf("\n Number of elements are : %d\n",iRet);
	
	
	return 0;
}

/*
	void InsertFirst(PPNODE Head , int no)
	void InsertLast(PPNODE Head , int no)
	void InsertAtPos(PPNODE Head , int no , int Pos)
	
	void DeleteFirst(PPNODE Head)
	void DeleteLast(PPNODE Head)
	void DeleteAtPos(PPNODE Head , int Pos)
	
	void Display(PNODE Head)
	int Count(PNODE Head)
*/