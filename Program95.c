//4
//1   2   3   4   *   *   *   *
//Time Complexity = 2N(because of two for loop N * 2 = 2N)
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);   //Variable Data
    }
    for(iCnt = 1 ;iCnt <= iNo; iCnt++)
    {
        printf("*\t");         //Fixed Data
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}