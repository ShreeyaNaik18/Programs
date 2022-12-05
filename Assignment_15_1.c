//Accept N number from user and return frequency of even numbers.
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[], int iLength)
{   
    int iCnt = 0;
    int Frequency =0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
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

     iRet = CountEven(p, iLength);

     printf("Result is : %d ",iRet);


    free(p);

    return 0;
}