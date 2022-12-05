#include<stdio.h>

//Structure declaration
//There is no memory allocation at this point
struct Demo
{
  int i;         //4
  float f;       //4
  int j;         //4
  double d;      //8
};

int main()
{
  //structure object/ variablr creation
  //Memory gets allocated at this point
  struct Demo obj1;
  struct Demo obj2;
  struct Demo obj3;

  //member initialization
  obj1.d = 11.0;
  obj2.i = 21;
  obj3.j = 51;

  printf("size of obj1 is : %d\n",sizeof(obj1));  //size of structure is equal to sumation of sizes of each and every element
  printf("size of obj2 is : %d\n",sizeof(obj2));
  printf("size of obj3 is : %d\n",sizeof(obj3));
  printf(" i of the obj2 is :%d\n",obj2.i);
  printf(" d of the obj1 is :%lf\n",obj1.d);
  printf(" j of the obj3 is :%d\n",obj3.j);

  return 0;
}