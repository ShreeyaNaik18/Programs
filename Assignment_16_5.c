//Accept N number from user and return product of all odd number.
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{   
    int iCnt = 0;
    int iOdd = 1;

    for(iCnt = 0; iCnt <= iLength; iCnt++)
    {
      if(Arr[iCnt] % 2 != 0)
      {
        iOdd = iOdd * Arr[iCnt];
      }
    }
    return iOdd;
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

    iRet = Product(p, iLength);

    printf("%d\n",iRet);

    free(p);

    return 0;
}