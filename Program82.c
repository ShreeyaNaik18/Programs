//Accept N numbers and find out the Maximum number from that N numbers
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)       //5
{
     int iMax = Arr[0];
     int iCnt = 0;
     for(iCnt = 0; iCnt< iSize ;iCnt++)
     {
        if(Arr[iCnt] > iMax)
         {
            iMax = Arr[iCnt];
         }
     }
     return iMax;
}
int main()
{
   int *ptr = NULL;
   int iLength = 0 , i = 0, iRet = 0;

   printf("Enter number of Elements : \n");   //1
   scanf("%d",&iLength);

   ptr = (int*)malloc(sizeof(int) * iLength);    //2

   printf("Enter the elements :\n");        //3
   for(i = 0; i < iLength; i++)
   {
    scanf("%d",&ptr[i]);
   }

   iRet = Maximum(ptr,iLength);       //4

   printf("Maximum number is : %d\n",iRet);

   free(ptr);             //6

    return 0;
}