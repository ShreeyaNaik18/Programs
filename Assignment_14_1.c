//Accept N number from user and return difference between summation of even elements and summation of odd elements.
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{   
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
       {
         iEven = iEven + Arr[iCnt];
       }
       else
       {
         iOdd = iOdd + Arr[iCnt];
       }
    }   
    return iEven - iOdd;
}
int main()
{  
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }  
    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d",&p[iCnt]);
    }  

    iRet = Difference(p, iLength);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}