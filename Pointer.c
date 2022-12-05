#include<stdio.h>

int main()
{
  int No = 11;

  int *p = &No;

  printf("%d\n",No);  //11
  printf("%d\n",p); //100
  printf("%d\n",*p); //11
  printf("%d\n",&No); //100
  printf("%d\n",&p);  //200
  printf("%d\n",sizeof(No));  //4
  printf("%d\n",sizeof(p));   //8(standard size is 8...it can also depends upon the platform )

 // printf("%d\n",No);
 // printf("%p\n",&No);
 // printf("%d\n",sizeof(No));

  return 0;
}