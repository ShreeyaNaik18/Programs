//Accept number from user and count the number of even digit
//Problems on Digits
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
#include<stdio.h>

int CountEvenDigits(int iNo)
{
   int iDigit = 0;
   int iEvenCnt = 0;
   
    if(iNo ==0)
    {
        return 1;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   while(iNo != 0)
   {
   iDigit = iNo % 10;
   
   if(iDigit % 2 == 0)
   {
      iEvenCnt ++;
   }
    iNo = iNo / 10;
   }
   return iEvenCnt;
}


int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of Even digits are : %d\n",iRet);
  
    return 0;
}

