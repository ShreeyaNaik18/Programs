#include<stdio.h>

int AdditionOfNumbers(int iNo1, int iNo2)
{
    int Ans = 0;

    Ans = iNo1 + iNo2;
    return Ans;

}
int main()
{    
    int iValue1 = 0 , iValue2 = 0 ;
    int iRet = 0;

    printf("Enter the First number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Second number : \n");
    scanf("%d",&iValue2);

     iRet = AdditionOfNumbers(iValue1 , iValue2);

     printf("Addition is : %d\n",iRet); 

    return 0;
}