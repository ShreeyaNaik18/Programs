//Write a program which accepts total marks and obtained marks from user and calculate percentage
#include<stdio.h>
float Percentage(int iNo1, int iNo2)
{
    float iPert = 0;
    if (iNo1 == 0 && iNo2 ==0)
    {
        return 1;
    }
    iPert = (iNo1/iNo2) *100;
    return iPert;
}
int main()
{   
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    printf("Please Enter total marks :\n");
    scanf("%d",&iValue2);
    
    printf("Please Enter obtained marks :\n");
    scanf("%d",&iValue2);

    iRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %d",iRet);
    return 0;
}