//Accept N number from user and Dislay all such elements which are multiples of 11.
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLength)
{   
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
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

     Display(p, iLength);


    free(p);

    return 0;
}