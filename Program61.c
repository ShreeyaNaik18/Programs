//Accept number from user and check wheather that number is palindrome or not
//Problems on Digits
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
#include<stdio.h>
#include<stdbool.h>

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

bool CheckPalindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return (iReverse == iData);
}

int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
      printf("%d number is Palindrome number.\n",iValue); 
    }
    else
    {
       printf("%d number is not Palindrome number. \n",iValue);
    }
    return 0;
}

