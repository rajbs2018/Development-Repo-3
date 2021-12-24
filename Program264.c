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
	while(First != NULL)
	{
		printf("|%d|->",First -> data);
		First = First -> next;
	}
	printf("\n");
}

int main()
{
	PNODE Head = NULL;
	
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
	
	return 0;
}