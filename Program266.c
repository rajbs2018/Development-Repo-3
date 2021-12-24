#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,*PPNODE;

void InsertFirst(PPNODE First,int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn -> next = NULL;
	newn -> data = no;
	
	if(First == NULL)
	{
		First = newn;
	}
	else
	{
		newn -> next = *First;
		First = newn;
	}
}

void Display(PNODE First)
{
	while(First != Null)
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}
	printf("\n");
}

bool CheckLoop(PNODE First)
{
	PNODE temp = First;
	bool flag = false; 
	while((temp != NULL)&&(temp -> next != NULL)&&(First != NULL))
	{
		temp = temp -> next -> next;
		First First -> next;
		
		if(temp == First)
		{
			flag = true;
			break;
		}
	}
	return flag;
}


int main()
{
	PNODE Head = NULL;
	PNODE temp1,temp2;
	
	InsertFirst(&Head,60);
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	
	temp1 = Head;
	temp2 = Head;
	while(temp1 -> next!= NULL)
	{
		temp1 = temp1 -> next; 
	}
	
	temp2 = temp2 -> next -> next;
	
	temp1 -> next = temp2;
	//Display(Head);
	
	bret = CheckLoop(Head);
	if(bret == true)
	{
		printf("Loop is Detected\n");
	}
	else
	{
		printf("Loop is Not Detected\n");
	}
	
	return 0;
}