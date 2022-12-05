//Accept N number from user and return the largest number.
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)       
{
     int iMax = Arr[0];
     int iCnt = 0;
     for(iCnt = 0; iCnt < iLength ;iCnt++)
     {
        if(Arr[iCnt] > iMax)
         {
            iMax = Arr[iCnt];
         }
     }
     return iMax;
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

    iRet = Maximum(p, iLength);

    printf("%d\n",iRet);

    free(p);

    return 0;
}