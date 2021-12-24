#include<iostream>
using namespace std;

//Specific Function
void Swap(char *p , char *q)
{
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

//Generic Function
template<class T>
void SwapX(T *p , T *q)
{
	T temp;
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
	
	SwapX(&x,&y);  //swap(100,200)
	
	cout<<"Value of x become : "<<x<<"\n";
	cout<<"Value of Y become : "<<y<<"\n";
	
	return 0;
}


/*

*/
