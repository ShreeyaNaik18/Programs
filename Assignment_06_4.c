//write a program which accpet three number and print its multiplication
#include<stdio.h>
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;
    if(iNo1 == 0)
    {
        return 1;
    }
    if(iNo2 == 0)
    {
        return 1;
    }
    if(iNo3 == 0)
    {
        return 1;
    }
    iMult = iNo1 * iNo2 * iNo3;
    return iMult;
}
int main()
{   
    int iValue1 = 0, iValue2 = 0,iValue3 = 0;
    int iRet = 0;
    printf("Please Enter three numbers\n");
    scanf("%d\t%d\t%d",&iValue1, &iValue2, &iValue3 );

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d",iRet);
    return 0;
}