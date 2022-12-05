#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *p = NULL;
  int size = 0;

  printf("Enter the size \n");
  scanf("%d",&size);

  p = (int *)malloc(sizeof(int) * size);  // for everything
  p = (int *)calloc(sizeof(int) , size);  //only for Array

   return 0;
}


// void * malloc (int size);
// void * calloc (int size , int elements);