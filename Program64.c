//Accept number from user and return such a digit from a number which is largest
//Input : 721     Output : 7
//Input : 5678    Output : 8
#include<stdio.h>

int MaxDigit(int iNo)
{
    int iMax = 0;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit > iMax)
       {
        iMax = iDigit;
       }

       iNo = iNo/10;
    }
     return iMax;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Largest digit is : %d\n",iRet);

    return 0;
}