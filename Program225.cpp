#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
private:
    PNODE first;
    int size;
    
public:
    SinglyLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int , int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

 SinglyLL::SinglyLL()
   {
       first = NULL;
       size = 0;
   }
   
   void SinglyLL::InsertFirst(int no)
   {
       PNODE newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE))
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
           newn->next = first;
           first = newn;
       }
       size++;
   }
   
   void SinglyLL::InsertLast(int no)
   {
       PNODE newn = new NODE;  // newn = (PNODE)malloc(sizeof(NODE))
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
           PNODE temp = first;
           
           while(temp->next != NULL)
           {
               temp = temp->next;
           }
           temp->next = newn;
       }
       size++;
   }
   
   void SinglyLL::InsertAtPos(int no, int ipos)
   {}
   
   void SinglyLL::DeleteFirst()
   {
       PNODE temp = first;
       
       if(first != NULL)
       {
           first = first->next;
           delete temp;
           
           size--;
       }
   }
   
   void SinglyLL::DeleteLast()
   {
       PNODE temp = first;
       
       if(first == NULL)
       {
           return;
       }
       else if(first->next == NULL)
       {
           delete first;
           first = NULL;
           size--;
       }
       else
       {
           while(temp->next->next != NULL)
           {
               temp = temp->next;
           }
           
           delete temp->next;
           temp->next = NULL;
           size--;
       }
   }
   
   void SinglyLL::DeleteAtPos(int ipos)
   {}
   
   void SinglyLL::Display()
   {
       PNODE temp = first;
       
       while(temp!= NULL)
       {
           cout<<temp->data<<"\t";
           temp = temp->next;
       }
       cout<<"\n";
   }
   
   int SinglyLL::Count()
   {
       return size;
   }

int main()
{
    SinglyLL obj;
    
    int iret = 0;
    
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    
    obj.Display();
    
    iret = obj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
    
    return 0;
}


/*
 Type 1
 
 wihle(temp!= NULL)
 {
    temp = temp->next;
 }
 
 --------------------------------------
 
 Type 2
 
 while(temp->next != NULL)
 {
    temp = temp->next;
 }
 
 ---------------------------------------
 
 Type 3
 
while(temp->next->next != NULL)
 {
 temp = temp->next;
 }
 
 
 
 */










