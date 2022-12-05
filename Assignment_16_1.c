//Accept N number from user and accept one another number as NO and check wheather that No is present in it or not.
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{   
    int iCnt = 0;
    int Frequency =0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    BOOL bRet = FALSE;
    int iValue = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    } 

    printf("Enter the number you want to search\n");
    scanf("%d",&iValue);

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d",&p[iCnt]);
    }  

     bRet = Check(p, iLength, iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is not Present");
    }
    free(p);

    return 0;
}