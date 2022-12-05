//Accept N numbers from user and as well as another number and return the index at which that number occurs at the first time and if it is not then return -1
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
          break;
        }
    }
        if(iCnt == iSize)
        {
          return -1;
        }
        else
        {
            return iCnt;
        }
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

    printf("Enter the Element to find out the index of the first Occurance :\n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = CheckOccurance(ptr, iLength ,iValue);
   
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
      printf("%d is occured in the array at the index %d\n",iValue,iRet);  
    }
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}