#include<iostream>
using namesapce std;

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
			
		}
		
		int Dequeue()	//DeleteFirst()
		{
			
		}
		
		void Display()
		{
			
		}
		int Count()
		{
			return size;
		}
		
};

int main()
{
	Stack obj;
	
	obj.Enqueue(11);
	obj.Enqueue(21);
	obj.Enqueue(51);
	obj.Enqueue(101);
	
	int iret = obj.Dequeue();
	cout<<iret;
	
	obj.Display();	// 51 21 11
	
	iret = obj.Count();
	cout<<"Size of stack : "<<iret<<"\n";
	
	
}