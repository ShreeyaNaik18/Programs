#include<stdio.h>
#include<stdlib.h>

int main ()
{
   int *p = NULL;
   int *q = NULL; //for not loosing the odd memory while not reallocating the memory 

   p = (int *)malloc(10 * sizeof(int));
   //USe the memory
  // p = (int *)realloc(p, 15 * sizeof(int));

   q = (int *)realloc(p, 15 * sizeof(int));
    if (q == NULL)
    {
      printf("Realloc fails ");
      q = p;
    }
   //Use the memory 
   
   free(q);

    return  0;
}

