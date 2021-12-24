#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class Queue	//Singly linear linked list
{
private:
		PNODE first;
		int size;
public:
		Queue()
		{
			first =NULL;
			size = 0;
		}
		
		void Enqueue(int no)	//InsertLast()
		{
			PNODE newn = new NODE;
			newn-> next = NULL;
			newn -> data = no;
			
			if(size == 0)
			{
				first = newn;
			}
			else 
			{
				PNODE temp = first;
				while(temp -> next != NULL)
				{
					temp =temp -> next;
				}
				temp -> next = newn;
			}
			size++;
		}
		
		int Dequeue()	//DeleteFirst()
		{
			int no = 0;
			PNODE temp = first;
			if(first == NULL)
			{
				cout<<"Queue is empty\n";
				return -1;
			}
			if(size == 1)
			{
				first = first -> next;
				delete first;
				first = NULL;
			}
			else
			{
				no = first -> data;
				first = first -> next;
				delete temp;
			}
			size--;
			
			return no;
		}
		
		void Display()
		{
			PNODE temp = first;
			for(int i = 1; i<= size ; i++,temp = temp -> next)
			{
				cout<<"|"<<temp -> data<< "|->";
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
	Queue obj;
	
	obj.Enqueue(11);
	obj.Enqueue(21);
	obj.Enqueue(51);
	obj.Enqueue(101);
	
	cout<<"Elemets of Queue : \n";
	
	obj.Display();
	int iret = obj.Dequeue();
	cout<<"Removed element from queue : "<<iret<<"\n";
	
	obj.Display();	// 51 21 11
	
	iret = obj.Count();
	cout<<"Size of stack : "<<iret<<"\n";
	
	
}