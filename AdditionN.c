/* 
Steps to Develop the application
Step 1 : Understand the problem statement 
Step 2 : Write the Algorithm 
Step 3 : Decide the programming language (C/C++/Java/Python/______)
Step 4 : Write the program 
Step 5 : Test the program 
*/

//Accept N numbers from user and perform addition of tht N numbers 

//Input :
//Value N = 5
//Values are 10,20,30,40,50.

//Output :
// Addition is : 150

//Algorithm
/*
   START 
       Accept the number of elements from user 
       Allocate the memory to store that numbers
       Accept the numbers from user
       Perform the Addition of all Numbersṇ
       Display the Addition       
   END
*/

////////////////////////////////////////////////////
//
//   Application Name : Addition of n numbers 
//   Input : N numbers 
//   Output : Addition 
//   Author : Shreeya Abhishek Naik 
//   Date : 18 September 2022
//
////////////////////////////////////////////////////

#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free

int main()
{  
    int *Arr = NULL; //Pointer to hold the address of the array 
    int iSize = 0;   // Variable to hold size of array
    register int i = 0;       //loop counter
    int iSum = 0;    //To hold the addition 
    
    printf("Please enter how many elements you want? \n");
    scanf("%d",&iSize);

    //Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory Gets Allocated Successfully\n");

    printf("Please enter the elements\n");
    //    1        2       3
    for(i = 0; i < iSize; i++)
    {
       scanf("%d",&Arr[i]);    //4
    }

    //Perform Addition
    //    1          2      3
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];   //4
    }

    printf("Addition is : %d\n",iSum);

    free(Arr);

    printf("Memory Gets Deallocated\n");


    return 0;
}