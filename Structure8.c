#include<stdio.h>

struct Demo
{
   int i;
   float f;
   double d;
};

union Hello
{
   int i;
   float f;
   double d;
};

int main()
{
 struct Demo dobj;
 union  Hello hobj;

  printf("Size of the Structure is : %d\n",sizeof(dobj));
   printf("Size of the Union is : %d\n",sizeof(hobj));

   dobj.i = 11;
   dobj.f = 90.8;
   dobj.d = 90.5;

   printf("Value of the Structure is : %d\n",dobj.i);
   printf("Value of the Structure is : %f\n",dobj.f);
   printf("Value of the Structure is : %lf\n",dobj.d);

   hobj.d = 90.4;

    printf("Value of the Union is : %f\n",hobj.f);
    printf("Value of the Union is : %lf\n",hobj.d);
   return 0;
}