//////////////////////////////////////////////////////////////////////////
// Steps to follow while programming
////////////////////////////////////////////////////////////////////////

//Step 1 : Understand the program
//Step 2 : Write the algorithm
//Step 3 : Select the programming language
//Step 4 : Write the program
//Step 5 : Test the program

////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept number from user and check wheather it is divisible by 5 or not
//Input : 23
//Output : 23 is not divisible by 5
//
//Input : 25
//Output : 25 is divisible by 5
//
//Input : -20
//Output : -20 is divisible by 5
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Algorithm
///////////////////////////////////////////////////////////////////////////////

/*
   START 
     Accept number from user as NO
     Divide that NO by 5 and check the value of reminder
     If the value is 0
        then Display as NO is Divisible by 5 
     Otherwise
        Then Display as NO is not Divisible by 5
    END    
*/
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//  
//  Function Name :  DivisibleByFive
//  Description :    To check wheather input id divisble by 5 or not
//  Input :          Integer 
//  Output :         Integer
//  Author :         Mrs. Shreeya Naik
//  Date :           12/10/2022 
////////////////////////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
    int iAns = 0;

    iAns = iNo % 5;

    if(iAns == 0)
      {
        return 1;
      }
    else
      {
        return 0;
      }

}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter your Number :\n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);

    if(iRet == 0)
      {
        printf("%d is not Divisible by 5.\n",iValue);
      }
    else  
      {
        printf("%d is Divisible by 5.\n",iValue);
      }

    return 0;
}