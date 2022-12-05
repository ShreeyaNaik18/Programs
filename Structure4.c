#include<stdio.h>

struct Demo
{
 int no;
 struct Demo *next;
};

int main()
{
  struct Demo obj1;
  struct Demo obj2;
  struct Demo obj3;

  obj1.no = 11;
  obj2.no = 21;
  obj3.no = 51;

  return 0;
}