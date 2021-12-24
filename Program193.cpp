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

UINT ToggleNibble(UINT iNo)
{
	UINT iMask = 0xf000000f;
	UINT iResult = 0;
	
	iResult = iNo ^ iMask;
	
	return iResult;	
	
}

int main()
{
	UINT iValue = 0, iRet = 0;
	
	cout<<"Enter number :\n";
	cin>>iValue;
	
	
	iRet = ToggleNibble(iValue);
	
	cout<<"Updates number is :" <<iRet<<"\n";


return 0;
  
}