#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CountBit(int iNo)
{
	int i = 0, iCnt = 0,iResult =0;
	int iMask = 0x00000001;
	
	for(i = 1; i < 32; i++)
	{
		iResult = iNo & iMask;
		if(iResult != 0)
		{
			iCnt++;
		}
		iMask = iMask << 1;
		
		/*
		00000001
		00000010
		00000100
		00001000
		00010000
		00100000
		01000000
		10000000
		*/
	}
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	cout<<"Enter number :\n";
	cin>>iValue;
	
	iRet = CountBit(iValue);
	
	cout<<"Number of bits On :" <<iRet<<"\n";

	return 0;
}
