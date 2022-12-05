//Write a program whih accepts range from uder and display all numbers in between that range
#include<stdio.h>
int RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
    if(iStart >= iEnd)
    {
        printf("Invalid Range");
    }
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
  
int main()
{  
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}