//Additon of 1 to n numbers
#include<stdio.h>

int Summation(int iNo)
{
   int iSum = 0;
   int iCnt = 0;
   for(iCnt = 1 ; iCnt <= iNo ;iCnt++)
   {
     iSum = iSum + iCnt;
   } 
    return iSum;
}
int main()
{ 
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Value : \n");
  scanf("%d",&iValue);

  iRet = Summation(iValue);

  printf("Summation od %d is %d\n",iValue,iRet);

  return 0;
}
