#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleOnRange(UINT iNo, int iStart , int iEnd)
{
	return (iNo ^ (0xFFFFFFFF << (iStart - 1)) & (0xFFFFFFFF >>(32 - iEnd)));

}
// iStart = 5
//iEnd = 16

//  0000 0000 0000 0000 0000 0000 0000 0000

//  0000 0000 0000 0000 1111 1111 1111 0000

//  iMask1 = 0xFFFFFFFF;
//  1111 1111 1111 1111 1111 1111 1111 0000

// iMask2 = 0xFFFFFFFF;
//  0000 0000 0000 0000 1111 1111 1111 1111

// iMask = iMask1 & iMask2;
// 1111 1111 1111 1111 1111 1111 1111 0000
// 0000 0000 0000 0000 1111 1111 1111 1111  &
//--------------------------------------------
// 0000 0000 0000 0000 1111 1111 1111 0000


int main()
{
	UINT iValue = 0, iRet = 0, i =0, j = 0;
	
	cout<<"Enter number :\n";
	cin>>iValue;
	
	cout<<"Enter Starting Position :\n";
	cin>>i;
	
	cout<<"Enter ending position :\n";
	cin>>j;
	
	
	iRet = ToggleOnRange(iValue , i , j);
	
	cout<<"Toggled number from starting position and ending position :" <<iRet<<"\n";


return 0;
  
}