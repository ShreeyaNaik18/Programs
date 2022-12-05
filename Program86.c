//Accept N number from user as well as another one number and return the index at which tha last number of the array occur
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
   
    for(iCnt = iSize-1 ;iCnt >=0; iCnt--)
    {
        if(Arr[iCnt]== iNo)
        {
          break;
        }
    }
    //we can write only return icnt insidie of writing loop as written in program85
    return iCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    int iRet = 0;
    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the Element to find out the index of the last Occurance :\n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CheckLastOccurance(ptr, iLength ,iValue);
   
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
      printf("%d is occured in the array at the last index %d\n",iValue,iRet);  
    }
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}