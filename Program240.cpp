#include<iostream>
#include<stdio.h>
using namespace std;

int SterlenI(char *str)
{
	int iCnt =0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int SterlenR(char *str)
{
	static int iCnt =0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		SterlenR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = SterlenR(Arr);

    cout<<"Length of String is :"<<iRet<<"\n";	
	
	return 0;
}