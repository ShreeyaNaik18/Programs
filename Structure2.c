#include<stdio.h>

struct Student
{
  int Marks;
  int Age;
  char Division;

};
int main()
{

  struct Student Amit;
  struct Student Pooja;

  Amit.Marks = 90;
  Amit.Age = 23;
  Amit.Division = 'A';

  Amit.Marks = 80;
  Amit.Age = 21;
  Amit.Division = 'B';

  printf("size of obj1 is : %d\n",sizeof(obj1));
  printf("size of obj2 is : %d\n",sizeof(obj2));
  printf("size of obj3 is : %d\n",sizeof(obj3));
  printf(" i of the obj2 is :%d\n",obj2.i);
  printf(" d of the obj1 is :%lf\n",obj1.d);
  printf(" j of the obj3 is :%d\n",obj3.j);

  return 0;
}