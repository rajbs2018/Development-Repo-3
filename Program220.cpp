#include<iostream>
using namespace std;

void Swap(float *p , float *q)
{
	float temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}

int main()
{
	float x = 0, y = 0;
	
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
11.5
Enter second number
21.5
Value of x become : 21.5
Value of Y become : 11.5

*/