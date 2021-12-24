#include<stdlib.h>
#include<stdio.h>

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
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		newn -> next = *First;
		*First = newn;
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

int MiddleElement(PNODE First)
{
	PNODE Fast = NULL, Slow =NULL;
	
	if(First == NULL)
	{
		printf("LL is Empty\n");
		return -1;
	}
	
	Fast = First;
	Slow = First;
	
	
	
}

int main()
{
	PNODE Head = NULL;
	int ret =0;
	
	InsertFirst(&Head,110);
	InsertFirst(&Head,100);
	InsertFirst(&Head,90);
	InsertFirst(&Head,800);
	InsertFirst(&Head,70);
	InsertFirst(&Head,60);
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	
	Display(Head);
	
	ret = MiddleElement(Head);
	printf("\nMiddle Element is : %d",ret);
	return 0;
}