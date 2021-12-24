#include<iostream>
#include<stdio.h>
using namespace std;

int CountCapR(char *str)
{
	static int iCnt =0;
	
	if(*str != '\0')
	{
		if((*str >= 'A')&&(*str <='Z'))
		{
			iCnt++;
		}
		str++;
		CountCapR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCapR(Arr);

    cout<<"Capital character of String is :"<<iRet<<"\n";	
	
	return 0;
}