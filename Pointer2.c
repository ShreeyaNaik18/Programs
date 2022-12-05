#include<stdio.h>

int main()
{
  int no1 = 10;
  int no2 = 20;
  int no3 = 30;

  int *p = NULL;

  p = &no1;
  printf("The Data Refer by p : %d\n",*p);

  p = &no2;
  printf("The Data Refer by p : %d\n",*p);

  return 0;
}