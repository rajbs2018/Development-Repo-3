#include<iostream>
using namespace std;

void Swap(char *p , char *q)
{
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}

int main()
{
	char x = '\0', y = '\0';
	
	cout<<"Enter first number \n";
	cin>>x;
	
	cout<<"Enter second number \n";
	cin>>y;
	
	Swap(&x,&y);  //swap(100,200)
	
	cout<<"Value of x become : "<<x<<"\n";
	cout<<"Value of Y become : "<<y<<"\n";
	
	return 0;
}


/*

E:\LB_17\Project>Myexe
Enter first number
A
Enter second number
Z
Value of x become : Z
Value of Y become : A

*/