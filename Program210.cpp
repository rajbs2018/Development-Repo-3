#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE ,*PNODE , **PPNODE;

class SinglyLL
{
private:
	PNODE first;
	int size;
	
public:
	SinglyLL()
	{
		first =NULL;
		size = 0;
	}
	
	void InsertFirst(int no)
	{
		PNODE newn = new NODE; // newn = (PNODE)malloc(sizeof(NODE));
		
		newn -> data = no;
		newn -> next = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			newn -> next = first;
			first = newn;
		}
		size++;
	}
	
	void InsertLast(int no)
	{
		PNODE newn = new NODE; // newn = (PNODE)malloc(sizeof(NODE));
		
		newn -> data = no;
		newn -> next = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			PNODE temp = first;
			
			while(temp -> next != NULL)
			{
				temp = temp -> next;
			}
			temp -> next = newn;
		}
		size++;
	}
	
	
	void DeleteFirst()
	{
		PNODE temp = first;
		
		if(first != NULL)
		{
			first = first -> next;
			delete temp;
			
			size--;
			
		}
	}
	
	void DeleteLast()
	{
		PNODE temp = first;
		
		if(first == NULL)
		{
			return;
		}
		if(first -> next == NULL)
		{
			delete first;
			first =NULL;
			size--;
		}
		else
		{
			while(temp -> next -> next != NULL)
			{
				temp = temp -> next;
			}
			
			delete temp -> next;
			temp -> next =NULL;
			size--;
		}
	}
	
	void InsertAtPos(int no , int ipos)
	{
		PNODE newn = new NODE;
		PNODE temp = first;
		int i = 0;
		
		newn -> data = no;
		newn -> next = NULL;
		
		if(ipos == 1)
		{
			InsertFirst(no);
		}
		else if(ipos == size + 1)
		{
			InsertLast(no);
		}
		else
		{
			PNODE newn = new NODE;
			
			newn -> data = no;
			newn -> next = NULL;
		
			for(i = 1 ; i < ipos - 1 ; i++)
			{
				temp = temp -> next;
			}
			newn -> next = temp -> next;
			temp -> next = newn;
			}	
			size++;
		}
	
	
	void DeleteAtPos(int ipos)
	{
		PNODE temp = first;
		int i = 0;
		
		if(ipos == 1)
		{
			DeleteFirst();
		}
		else if(ipos  == size + 1)
		{
			DeleteLast();
		}
		else
		{
			for(i = 1; i < ipos -1 ; i++)
			{
				temp = temp -> next;
			}
			temp -> next = temp -> next -> next;
			delete(temp -> next);
		}
		size--;
	}
	
	void Display()
	{
		
		PNODE temp = first;
		
		if(size == 0)
		{
			cout<<"Linked list is empty \n";
			cout<<"NULL";
		}
		
		while(temp != NULL)
		{
			cout<<temp -> data <<"\t";
			temp = temp -> next;
		}
		cout<<"\n";
	}
	
	
	int Count()
	{
		return size;
	}
	
};

int main()
{
	SinglyLL obj;
	int iret = 0,value = 0,pos = 0,ichoice = 1; 
	
	while(ichoice != 0)
	{
		cout<<"\n----------------------------------------------------------\n";
		cout<<"1 : Insert a node at First Position \n";
		cout<<"2 : Insert a node at Last Position \n";
		cout<<"3 : Insert a node at At Position \n";
		cout<<"4 : Delete a node at First Position \n";
		cout<<"5 : Delete a node at Last Position \n";
		cout<<"6 : Delete a node at At Position \n";
		cout<<"7 : Display the linked list \n";
		cout<<"8 : Count Of Linked list \n";
		cout<<"0 : Exit from Linked list \n";
		cout<<"\n----------------------------------------------------------\n";
		
		cin>>ichoice;
		
		switch(ichoice)
		{
			case 1 :
			cout<<"Enter a number to insert in first Position \n";
			cin >>value;
			obj.InsertFirst(value);
			break;
			
			case 2 :
			cout<<"Enter a number to insert in last position \n";
			cin>>value;
			obj.InsertLast(value);
			break;
			
			case 3:
			cout<<"Enter a number to insert in linked list \n";
			cin>>value;
			cout<<"Enter a position to add node in linkedlist \n";
			cin>>pos;
			obj.InsertAtPos(value,pos);
			break;
			
			case 4:
			cout<<"Deleted first node \n";
			obj.DeleteFirst();
			break;
			
			case 5:
			cout<<"Deleted last node \n";
			obj.DeleteLast();
			break;
			
			case 6:
			cout<<"Enter a position to delete a node \n";
			cin>>pos;
			obj.DeleteAtPos(pos);
			break;
			
			case 7:
			cout<<"Linked List is : \n";
			obj.Display();
			break;
			
			case 8:
			iret = obj.Count();
			cout<<"Number of elements are : "<<iret<<"\n";
			break;
			
			case 0:
			cout<<"Thanks for using Linked list";
			break;
			
			default:
			cout<< "Enter a choice in range of 0 to 8";
			break;
		}
	}
	return 0;
}