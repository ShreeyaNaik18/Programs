//Problems on Digits
//Accept number from user and and return summation of digits
//Input : 751
//Output : Summation is : 13
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
#include<stdio.h>
int SumOfDigits(int iNo)
{
   int iSum = 0;
  
  //Accept any integer as posivite or negative and for addtion as positive use updator i.e
   if(iNo < 0)      //Updator
   {
      iNo = -iNo;
   }
   //By removing iDigit and putting iNo % 10 instead of iDigit in summation
   while(iNo != 0)
   {
   
   iSum = iSum + (iNo % 10);
   //by removing iNo = iNo / 10; int the below syntax by iNo /= 10;
   iNo /= 10;
   }
   return iSum;
}

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