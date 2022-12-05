//Accept N number from user and accept one another number as NO and return frequency of No from it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{   
    int iCnt = 0;
    int Frequency =0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
       {
         Frequency++;
       }
    }
    return Frequency;
}
int main()
{  

    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;
    int iRet = 0;
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

     iRet = Frequency(p, iLength, iValue);

    printf("Frequency is %d", iRet);
    free(p);

    return 0;
}