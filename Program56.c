//Accept number from user and Display the count of even and odd digits of that number
//Problems on Digits
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
#include<stdio.h>

void DisplayEvenOddDigits(int iNo)
{
   int iDigit = 0;
   int iEvenCnt = 0;
   int iOddCnt = 0;
   
    if(iNo == 0)
    {
       printf("Number of Even digits are : 1\n");
       printf("Number of Even digits are : 0\n");
       return;
    }
   while(iNo != 0)
   {
   iDigit = iNo % 10;
   
   if(iDigit % 2 == 0)
   {
      iEvenCnt++;
   }
   else
   {
      iOddCnt++;
   }
    iNo = iNo / 10;
   }
   printf("Number of Even digits are : %d\n",iEvenCnt);
   printf("Number of Even digits are : %d\n",iOddCnt);
}
#include<stdio.h>

int main()
{   
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
    DisplayEvenOddDigits(iValue);
  
    return 0;
}

