//Accept N number from user and return the difference between largest number and smallest number.
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)       
{
     int iMax = Arr[0];
     int iMin = Arr[0];
     int iCnt = 0;
     for(iCnt = 0; iCnt < iLength ;iCnt++)
     {
        if(Arr[iCnt] > iMax)
         {
            iMax = Arr[iCnt];
         }
         else if(Arr[iCnt] < iMin)
         {
            iMin = Arr[iCnt];
         }
     }
     return iMax - iMin;
}

int main()
{  
    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;
    int iRet = 0;

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

    printf("%d\n",iRet);

    free(p);

    return 0;
}