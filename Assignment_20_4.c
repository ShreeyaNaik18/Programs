//Accept number of rows and cloumns and display below pattern
/*
   4    4   4   4
   3    3   3   3
   2    2   2   2
   1    1   1   1
*/
//Accept number of rows and columns from user and Display below pattern
#include<stdio.h>

void Display(int iRow, int iCol)        //N
{
  int i = 0; 
  int j = 0;

  for(i = iRow; i >= 1; i--)
  {
    for(j = iCol; j >= 1; j--)
    {
        printf("%d\t",i);
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