#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
  int iAns = 0;
  iAns = iNo1 + iNo2;
  return iAns;

}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   int iReturn = 0;

   printf("Enter First Number :\n");
   scanf("%d",&iValue1);

   printf("Enter Second Number :\n");
   scanf("%d",&iValue2);

   iReturn = Addition(iValue1,iValue2);
   printf("Addition of Two numbers is : %d\n",iReturn);

   return 0;
}
//This program is Dyanamic memory allocation