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
	char x = 'A', y = 'B';
	SwapX(&x,&y);  //swap(100,200)
	
	cout<<"Value of x become : "<<x<<"\n";
	cout<<"Value of Y become : "<<y<<"\n";
	
	int i = 11, j = 21;
	SwapX(&i,&j);  //swap(100,200)
	
	cout<<"Value of x become : "<<i<<"\n";
	cout<<"Value of Y become : "<<j<<"\n";
	
	return 0;
}


/*

E:\LB_17\Project>Myexe
Value of x become : B
Value of Y become : A
Value of x become : 21
Value of Y become : 11

*/
