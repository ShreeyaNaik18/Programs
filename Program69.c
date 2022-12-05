//Program on 'N' Numbers
//Accept 5 number from user and perfrom the addition of that 5 numbers.
#include<stdio.h>

int main()
{  
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements :\n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
      scanf("%d",&Arr[iCnt]);
    }
    printf("Elemnts from Array are :\n");
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
      printf("%d\t",Arr[iCnt]);
    }

    return 0;
}