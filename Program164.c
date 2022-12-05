//Data Structures
#include<stdio.h>
#include<stdlib.h>

#pragma pack (1)

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE newN = (PNODE)malloc(sizeof (NODE));

    newN->data = 11;
    newN->next = NULL;

    printf("%d\n",newN->data);
    printf("Size of structure %d\n",sizeof(NODE));

    return 0;
}