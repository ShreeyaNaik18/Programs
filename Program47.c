//Problems on Digits
//Accept number from user and count the number of digits of that number
//Input : 751
//Output : 3

//Input : 7515
//Output : 4
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
#include<stdio.h>

int CountDigits(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;

   while(iNo != 0)
   {
   iDigit = iNo % 10;
   iNo = iNo / 10;
   iCnt ++;
   }
   return iCnt;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);
  
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