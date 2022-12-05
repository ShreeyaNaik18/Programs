//Accept number from user and return that number reversely 
//Accept number from user and Display the count of even and odd digits of that number
//Problems on Digits
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo /10;
    }
    return iRev;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
    iRet = Reverse (iValue);

    printf("Reverse number is : %d\n",iRet);
  
    return 0;
}

