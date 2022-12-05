//Program on 'N' Numbers
//Accept N number from user and perfrom the addition of that N numbers.
//Static memory allocation
#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
   int iCnt = 0, iSum = 0;
   
   for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
      iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int main()
{  
    int *ptr = NULL;
    int iCnt = 0 , iRet = 0;
    int iLength = 0;
    
    printf("Enter number of Elements you want to store :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength *sizeof(int));

    printf("Enter the Elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }

    printf("Elements from Array are :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("%d\n",ptr[iCnt]);
    }

    iRet = Summation(ptr,iLength);
    printf("Addition of all Elements is :%d\n",iRet);
    
    free(ptr);

    return 0;
}