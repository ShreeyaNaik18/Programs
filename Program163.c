//Data Structures
#include<stdio.h>
#include<stdlib.h>

#pragma pack (1)

struct node
{
    int data;
    struct node *next;

};
int main()
{
    struct node *newN = (struct node *)malloc(sizeof (struct node));

    newN->data = 11;
    newN->next = NULL;

    printf("%d\n",newN->data);
    printf("Size of structure %d\n",sizeof(struct node));

    return 0;
}