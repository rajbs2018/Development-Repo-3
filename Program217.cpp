#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class Stack	//Singly linear linked list
{
private:
		PNODE first;
		int size;
public:
		Stack()
		{
			first =NULL;
			size = 0;
		}
		
		void push(int no)	//InsertFirst()
		{
			PNODE newn = new NODE;
			
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
		
		int pop()	//DeleteFirst()
		{
			int no = 0;
			PNODE temp = first;
			if(first == NULL)
			{
				cout<<"Stack is empty\n";
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
			while(temp != NULL)
			{
				cout<<"|"<<temp-> data<<"|"<<"\n";
				temp = temp -> next;
			}
		}
		int Count()
		{
			return size;
		}
		
};

int main()
{
	Stack obj;
	
	obj.push(11);
	obj.push(21);
	obj.push(51);
	obj.push(101);
	
	cout<<"Elements from stack \n";
	obj.Display();
	
	int iret = obj.pop();
	cout<<"Poped elelmens is :"<<iret<<"\n";
	
	cout<<"Elemens of stack : \n";
	obj.Display();	// 51 21 11
	
	iret = obj.Count();
	cout<<"Size of stack : "<<iret<<"\n";
	
	
}