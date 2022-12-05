//Accept N number from user and display all such number which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)       
{
   int iCnt = 0;

  for(iCnt = 0; iCnt < iLength ;iCnt++)
  {
    if((Arr[iCnt] < 999) && (Arr[iCnt] > 99))
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

    Digits(p, iLength);

    free(p);

    return 0;
}