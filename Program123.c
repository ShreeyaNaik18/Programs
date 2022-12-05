/*
Row = 6 
Column = 6

*
* *
* * *
* * * *

*/
#include<stdio.h>

void Display(int iRow, int iCol)      
{
  int i = 0; 
  int j = 0;

  if(iRow != iCol)
  {
    return;
  }

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= i ;j++)   //For optimization ...j<= i instead of j <= iRow/iCol.. it will iteration only 10 times instead of 16 times
    { 
        printf("*\t");   
    }
    printf("\n");
 }
      
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of Column\n");
    scanf("%d",&iValue2);


    Display(iValue1, iValue2);

    return 0;
}