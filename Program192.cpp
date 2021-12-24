#include<iostream>
using namespace std;

typedef unsigned int UINT;

/*
opt1  opt2  &  |  ^
1      0    0  1  1
0      1    0  1  1
1      1    1  1  0
0	   1    0  0  0

iNo    0000  0000   1110   0100  1111  0100  1011  1010
iPos   6
iRet   0000  0000   1110   0100  1111  0100  1011  1010

*/

UINT ToggleBit(UINT iNo, int iPos1, int iPos2)
{
	int iMask1 = 0x00000001, iMask2 = 0x00000001 ,iMask = 0;
	int iResult = 0;
	
	if((iPos1 < 1) || (iPos1 > 32))
	{
		return 0;
	}
	
	if((iPos2 < 1) || (iPos2 > 32))
	{
		return 0;
	}
	
	iMask1 = iMask1 <<(iPos1 -1);
	iMask2 = iMask2 <<(iPos2 -1);
		
	iMask = iMask1 | iMask2;
	
	iResult = iNo ^ iMask;
	
	return iResult;	
	
}
/*

position = 5

iMask      0 0 0 0 0 0 0 1
iMask = iMask<<(position - 1)
iMask = iMask<<(5 - 1)
iMask = iMask<<4
iMask      0 0 0 1 0 0 0 0

Input      0 1 1 0 0 1 0 0 
iMask      0 0 0 1 0 0 0 0   ^
-------------------------------
Output     0 1 1 1 0 1 0 0 
*/
int main()
{
	int iValue = 0, iRet = 0, i = 0, j = 0;
	
	cout<<"Enter number :\n";
	cin>>iValue;
	
	cout<<"Enter the position of bit \n";
	cin>>i;
	
	cout<<"Enter the position of bit \n";
	cin>>j;
	
	iRet = ToggleBit(iValue, i , j);
	
	cout<<"Updates number is :" <<iRet<<"\n";


return 0;
  
}