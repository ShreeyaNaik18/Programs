#include<stdio.h>

struct Student
{
  int Marks;
  int Age;
  char Division;
};

int main()
{
  struct Student obj;
  struct Student *ptr = NULL;

  ptr = &obj;

  //Indirect Accessig operator
  ptr->Marks = 90;
  ptr->Age = 21;
  ptr->Division = 'A';

  return 0;
}