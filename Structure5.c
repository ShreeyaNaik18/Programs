#include<stdio.h>

struct Demo
{
  int no;
  float f;

};
int main()
{
   struct Demo Arr[3];

   Arr[0].no = 11;
   Arr[0].f = 10.9;

   Arr[1].no = 21;
   Arr[1].f = 90.7;

   Arr[2].no = 51;
   Arr[2].f = 78.9;

  printf("Size of Array is : %d\n",sizeof(Arr));
  printf("Size of Structure is : %d\n",sizeof(struct Demo));
  printf("The value of First structure element : %d\n", Arr[0].no);
  printf("The value of Second structure element : %d\n", Arr[1].no);
  printf("The value of Third structure element : %d\n", Arr[2].no);

  printf("The value of First structure element : %f\n", Arr[0].f);
  printf("The value of Second structure element : %f\n", Arr[1].f);
  printf("The value of Third structure element : %f\n", Arr[2].f);


   return 0;
}