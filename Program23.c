#include<stdio.h>

void Display(int iValue)
{
    int iCount = 0;
    
    for(iCount = 1; iCount <= iValue ; iCount++)
    {
        printf("Marvellous : %d\n",iCount);
    }

}
int main()
{
    int iNo = 0;
    
    printf("Enter the number of Iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}