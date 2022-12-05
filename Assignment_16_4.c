//Accept N number from user and accept Range, Display all elements fom that range.
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{   
    int iCnt = 0;
    int Occurance = 0;

    for(iCnt = 0; iCnt <= iLength; iCnt++)
    {
        if((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
         printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{  

    int iCnt = 0;
    int *p = NULL;
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    } 

    printf("Start Point\n");
    scanf("%d",&iValue1);

    printf("End Point\n");
    scanf("%d",&iValue2);

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d",&p[iCnt]);
    }  

    Range(p, iLength, iValue1, iValue2);

    free(p);

    return 0;
}