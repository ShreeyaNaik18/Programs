#include<stdio.h>

void Display(int iValue)
{
    int iCount = 0;
    
    iCount = 1;
    
    while(iCount <= iValue)
    {
        printf("Marvellous : %d\n",iCount);
        iCount++;
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