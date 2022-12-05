//Accept number from user and write the table of that number
//Perform Addition of non factors of a number
#include<stdio.h>

void DisplayTable(int iNo)
{
  int iCnt = 0;
    
    printf("_____________________________________\n");
    
    printf("Table of %d is :\n",iNo);

    printf("_____________________________________\n");

   for(iCnt = 1 ; iCnt <= 10 ;iCnt ++)
   {
    printf("%d\n",iNo * iCnt);
   }
    printf("_____________________________________\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;

}