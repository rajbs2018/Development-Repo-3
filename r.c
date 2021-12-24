#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char fname[20];
	char Buffer[10];
	
	printf("Enter file name\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	iRet = lseek(fd,0,2);
	
	printf("File size is : %d\n",iRet);
	
	close(fd);
	
	return 0;
}