//Accept number from user and return such a digit from a number which is Smallest
//Input : 721     Output : 1
//Input : 5678    Output : 5
#include<stdio.h>

int MinDigit(int iNo)
{
    int iMin = 9;
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
       iDigit = iNo % 10;
       if(iDigit < iMin)
       {
       iMin = iDigit;
       }

       iNo = iNo/10;
    }
     return iMin;
}
int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);

    printf("Smallest digit is : %d\n",iRet);

    return 0;
}