#include<iostream>
using namesapce std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class Stack
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
		
		void push(int no)
		{
			
		}
		
		int pop()
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
	
	obj.push(11);
	obj.push(21);
	obj.push(51);
	obj.push(101);
	
	int iret = obj.pop();
	cout<<iret;
	
	obj.Display();	// 51 21 11
	
	iret = obj.Count();
	cout<<"Size of stack : "<<iret<<"\n";
	
	
}