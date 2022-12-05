//Accept number of rows and number of colunms from user and Display below pattern.
//     A   B  C  D
//     A   B  C  D
//     A   B  C  D
//     A   B  C  D

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int  i = 0; 
  int  j = 0;
  char ch = 'A';

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= iCol; j++)
    {
        printf("%c\t",ch);
        
    }
    printf("\n");
  }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the number of Column\n");
    scanf("%d",&iValue2);


    Pattern(iValue1, iValue2);
    
    return 0;
}