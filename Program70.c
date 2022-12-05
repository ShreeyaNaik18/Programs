//Program on 'N' Numbers
//Accept 5 number from user and perfrom the addition of that 5 numbers.
#include<stdio.h>

int Summation(int iData[], int iSize)
{
   int iCnt = 0, iSum = 0;
   
   for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
      iSum = iSum + iData[iCnt];
    }
    return iSum;
}
int main()
{  
    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
      scanf("%d",&Arr[iCnt]);
    }

    printf("Elemnts from Array are :\n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
      printf("%d\n",Arr[iCnt]);
    }

    iRet = Summation(Arr,5);
    printf("Addition of all elements is :%d\n",iRet);

    return 0;
}