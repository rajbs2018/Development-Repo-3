#include<iostream>

using namespace std;

class Marvellous
{
	
	public:
	int Addition(int x, int y)
	{
		int iAns = 0;
		iAns = x + y;
		return iAns;
	}
};

int main()
{   
	int iNo1 = 0 , iNo2 = 0, iRet = 0;
	
	Marvellous mobj; //Marvellous mobj = new Marvallous();   java
	
	cout<<"Enter first number\n";
	cin>>iNo1; //scanf("%d",&iNo1);  c
	
	cout<<"Enter second number\n";
	cin>>iNo2;  //scanf("%d",&iNo2);  c
	
	iRet = mobj.Addition(iNo1,iNo2);
	
	cout<<"Addition is : "<<iRet<<"\n";
	
	return 0;
}
