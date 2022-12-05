#include<stdio.h>

#pragma pack(1) //to avoid the padding or wastage of byte
//this syntax means that compiler should allocate the memory by 1 byte
struct Demo
{
  int i;
  char ch;
  int j;
  char ch1;
  float f;
  char ch2;
  float d;

};

int main()
{
   struct Demo dobj;

   printf("Size of the Structure is : %d\n",sizeof(dobj));

   return 0;

}