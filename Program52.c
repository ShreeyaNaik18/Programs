//Problems on Digits
//Accept number from user and and return summation of digits
//Input : 751
//Output : Summation is : 13
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times

int SumOfDigits(int iNo)
{
   int iDigit = 0;
   int iSum = 0;
  
   while(iNo != 0)
   {
   iDigit = iNo % 10;
   iNo = iNo / 10;
   iSum = iSum + iDigit;
   }
   return iSum;
}
#include<stdio.h>

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumOfDigits(iValue);

    printf("Addition of the digits are : %d\n",iRet);
  
    return 0;
}



/*
iNo = 751

iDigit = iNo % 10               1
iNo = iNo /10                   75          {

iDigit = iNo % 10               5             iDigit = iNo % 10        
iNo = iNo /10                   7             iNo = iNo / 10

iDigit = iNo % 10               7            }
iNo = iNo /10                   0
*/