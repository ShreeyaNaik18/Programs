#include<stdio.h>

int main()
{
  char ch = 'A';
  int i = 11;
  float f = 9.09;
  double d = 89.9078;

  char *cp = &ch;
  int *ip = &i;
  float *fp = &f;
  double *dp = &d;

  void *vp = &ch;

  printf("Value of Character : %c\n",ch);
  printf("Address of Character : %p\n",&ch);
  printf("Value inside cp : %p\n",cp);
  printf("Data refer by cp : %c\n",*cp);
  printf("Size of charater : %d\n ",sizeof(ch));
  printf("Size of cp : %d\n",sizeof(cp));

  printf("Value of Integer : %d\n",i);
  printf("Address of Integer : %p\n",&i);
  printf("Value inside ip : %p\n",ip);
  printf("Data refer by ip : %d\n",*ip);
  printf("Size of Integer : %d \n",sizeof(i));
  printf("Size of ip : %d \n",sizeof(ip));

  printf("Value of float : %f\n",f);
  printf("Address of float : %p\n",&f);
  printf("Value inside fp : %p\n",fp);
  printf("Data refer by fp : %f\n",*fp);
  printf("Size of float : %d\n",sizeof(f));
  printf("Size of fp : %d\n",sizeof(fp));

  printf("Value of double : %lf\n",d);
  printf("Address of double : %p\n",&d);
  printf("Value inside dp : %p\n",dp);
  printf("Data refer by dp : %lf\n",*dp);
  printf("Size of double : %d\n",sizeof(d));
  printf("Size of dp : %d\n",sizeof(dp));

  printf("Data Refer by vp : %c\n",*(char *)vp);

  vp = &i;

  printf("Data Refer by vp : %d\n",*(int *)vp);

  return 0;
}