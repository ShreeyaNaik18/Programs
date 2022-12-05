//Acept Amount in US dollar and return its corresponding value in Indian currency 
//Consider 1$ = 70 RS
#include<stdio.h>
int DollarToINR(int iNo)  
{
   int i =  iNo * 70;
   return i;
}
int main()
{  
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is : %d INR",iRet);

    return 0;
}