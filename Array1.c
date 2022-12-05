#include<stdio.h>

int main()
{
  //First way to intialise the array
  int Arr[5] = {10,20,30,40,50};

  //Second way to intialise the array
  int Brr[] = {10,20,30,40,50};

  //Third way to intialise the array
  int Crr[5];
  Crr[0] = 10;
  Crr[1] = 20;
  Crr[2] = 30;
  Crr[3] = 40;
  Crr[4] = 50;

  printf("%d\n",Arr[0]);
  printf("%d\n",Arr[1]);
  printf("%d\n",Arr[2]);
  printf("%d\n",Arr[3]);
  printf("%d\n",Arr[4]);

  printf("%d\n",Brr[0]);
  printf("%d\n",Brr[1]);
  printf("%d\n",Brr[2]);
  printf("%d\n",Brr[3]);
  printf("%d\n",Brr[4]);

  printf("%d\n",Crr[0]);
  printf("%d\n",Crr[1]);
  printf("%d\n",Crr[2]);
  printf("%d\n",Crr[3]);
  printf("%d\n",Crr[4]);



  return 0;
}