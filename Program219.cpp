#include<iostream>
using namespace std;

void Swap(int *p , int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}

int main()
{
	int x = 0, y = 0;
	
	cout<<"Enter first number \n";
	cin>>x;
	
	cout<<"Enter second number \n";
	cin>>y;
	
	Swap(&x,&y);  //swap(100,200)
	
	cout<<"Value of x become : "<<x<<"\n";
	cout<<"Value of Y become : "<<y<<"\n";
	
	return 0;
}
