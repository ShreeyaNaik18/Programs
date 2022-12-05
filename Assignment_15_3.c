//Accept N number from user and Check wheather that number contains 11 in it or not.
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{   
    int iCnt = 0;
    int Frequency =0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
       {
         return 1;
       }
       else
       {
         return 0;
       }
    }
}
int main()
{  

    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;
    BOOL bRet = 0;

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

     bRet = Check(p, iLength);

     if(bRet == TRUE)
     {
        printf("11 is present");
     }
     else
     {
        printf("11 is  not present");
     }
     


    free(p);

    return 0;
}