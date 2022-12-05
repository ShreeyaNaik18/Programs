//Problems on Digits
//Accept number from user and count the number of digits of that number
//Input : 751
//Output : 3

//Input : 7515
//Output : 4
#include<stdio.h>

int CountDigits(int iNo)
{

   return 0;
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