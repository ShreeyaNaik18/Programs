//Write a program which accept number from user and Display its factors in Decreasing order
#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iNo %iCnt == 0)
        {
        printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}