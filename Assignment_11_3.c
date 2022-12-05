//Write a program whih accepts range from user and return addition all even numbers in between that range
#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0, iSum = 0;
    if(iStart >= iEnd)
    {
        printf("Invalid Range");
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
          iSum = iSum + iCnt;
    }
    return iSum;
}
  
int main()
{  
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}