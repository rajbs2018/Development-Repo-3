#include<stdio.h>
#include<stdlib.h>  // for malloc

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head , PNODE Tail)
{
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	do
	{
		printf("|%d|->",Head -> data);
		Head = Head -> next;
	}while(Head != Tail -> next);
	
	printf("\n");
}
int Count(PNODE Head, PNODE Tail)
{
	int iCnt = 0;
	
	if((Head == NULL) && (Tail == NULL))
	{
		printf("Empty Linked List \n");
		return 0;
	}
	do
	{
		iCnt++;
		Head = Head -> next;
	}while(Head != Tail -> next);
	
	return iCnt;
}
void InsertFirst(PPNODE Head , PPNODE Tail , int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((*Head == NULL) && (*Tail == NULL))  //LL is empty
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
	(*Tail)-> next = *Head;	//To maintain cicular nature
}

void InsertLast(PPNODE Head , PPNODE Tail , int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((*Head == NULL) && (*Tail == NULL))  //LL is empty
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		(*Tail) -> next = newn;
		*Tail = newn;
	}
	(*Tail)-> next = *Head;
}



void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	if((*Head == NULL) &&(*Tail == NULL))  //Empty LL
	{
		return;
	}
	else if(*Head == *Tail) //Single node LL
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else // Multiple LL
	{
		*Head = (*Head) -> next;
		free((*Tail) -> next);
		(*Tail) -> next = *Head;
	}
}

void DeleteLast(PPNODE Head , PPNODE Tail)
{
	PNODE temp = *Head;
	
	if((*Head == NULL) &&(*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		while(temp -> next != *Tail)
		{
			temp = temp -> next;
		}
		free(*Tail);
		*Tail = temp;
		(*Tail) -> next = *Head;
	}
}

void InsertAtPos(PPNODE Head ,PPNODE Tail ,int no , int ipos)
{
	PNODE temp = *Head;
	int size = 0;
	PNODE newn = NULL;
	int i = 0;
	size = Count(*Head ,*Tail);
	
	if((ipos < 1)||(ipos > size + 1))
	{
		return;
	}
	
	if(ipos == 1)
	{
		InsertFirst(Head,Tail,no);
	}
	else if(ipos == size +1)
	{
		InsertLast(Head,Tail,no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn -> data = no;
		newn -> next = NULL;
		
		for(i = 1; i < ipos -1 ; i++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp = newn;
	}
}


void DeleteAtPos(PPNODE Head ,PPNODE Tail , int ipos)
{
	PNODE temp = *Head;
	PNODE targated = NULL;
	int size = Count(*Head,*Tail);
	int i = 0;
	
	if((ipos < 1)&&(ipos > size))
	{
		return;
	}
	
	if(ipos == 1)
	{
		DeleteFirst(Head, Tail);
	}
	else if(ipos == size)
	{
		DeleteLast(Head, Tail);
	}
	else
	{
		for(i = 0; i < ipos - 1; i++)
		{
			temp = temp -> next; 
		}
		targated = temp -> next;
		temp -> next = targated -> next;
		free(targated);
	}
	
}


int main()
{
	PNODE first = NULL;
	PNODE last = NULL;
	int iRet = 0;
	
	InsertFirst(&first,&last,51);
	InsertFirst(&first,&last,21);
	InsertFirst(&first,&last,11);
	
	InsertLast(&first,&last,101);
	
	InsertAtPos(&first,&last,55,2);
	Display(first,last);
	iRet = Count(first,last);
	printf("Number of elements are : %d\n",iRet);
	
	DeleteFirst(&first,&last);
	DeleteLast(&first,&last);
	DeleteAtPos(&first,&last,2);
	
	Display(first,last);
	iRet = Count(first,last);
	printf("Number of elements are : %d\n",iRet);
	
	
	
	return 0;
}