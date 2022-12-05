//Accept number from user and check wheather that number is palindrome or not
//Example : Input : 121   Output : 121 is palindrome 
//Example : Input : 123   Output : 123 is not palindrome 
//Time complexity : N = number of digits ie if digits are 5 then code will loop5 times
//using for loop
#include<stdio.h>
#include<stdbool.h>
                       //1
bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }       //2
    for(; iNo != 0;)       //for(;;)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo /10;          //3
    }
    if(iRev == iTemp)
    {
       return true;
    }
    else
    {
        return false;
    }
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

