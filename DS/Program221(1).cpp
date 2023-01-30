//doubly Linkedlist in c++
#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      // X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no ,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
};

DoublyLL :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        (First)->prev = newn;  // X

        First = newn;
        iCount++;
    }
}

void DoublyLL :: InsertLast( int no)
{
    PNODE newn = new NODE;
    PNODE temp = First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;      // X
        iCount++;
    }
}

void DoublyLL :: InsertAtPos(int no, int ipos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((ipos < 1) || (ipos > (iCount + 1)))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = new NODE; 
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        int iCnt = 0;

        for(iCnt = 1;iCnt < ipos -1; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next -> prev = newn;     //X
        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{
  if(First == NULL)      //LL is empty
  {
      return;
  }
  else if((First)->next == NULL)  //LL contains 1 node
  {
     delete First;
     First = NULL;
  }
  else        //LL contains more than 1 node
  {
    First = (First)-> next;
    delete (First)->prev;         //X
    (First)->prev = NULL;        //X
  }
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = First;
    if(First == NULL)      //LL is empty
    {
        return;
    }
    else if((First)->next == NULL)  //LL contains 1 node
    {
        delete First;
        First = NULL;
    }
    else        //LL contains more than 1 node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
          delete temp->next;
          temp->next = NULL;
    }
}

void DoublyLL :: DeleteAtPos(int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > (iCount)))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(iCnt = 1;iCnt < ipos -1; iCnt++)
        {
            temp1 = temp1 -> next;
        }
        temp2 = temp1 -> next;
        temp1 -> next = temp2 ->next;   //temp1 -> next = temp2 ->next -> next;
        temp1 -> next -> prev = temp1;
        delete temp2;
    }
}

void DoublyLL :: Display()
{
    printf("Elements of Linked list are\n");

    printf("NULL<=> ");

    while(First != NULL)
    {
        printf("| %d |<=> ",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int main()
{
    DoublyLL obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";
    
    obj1.InsertAtPos(105,5);
    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";
    
    obj1.DeleteAtPos(5);
    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";
    
    return 0;

   }