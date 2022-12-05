//Write a program which accept area in square feet and convert it into square meter
//(1 Squaremeter = 0.0929Squaremeter)
#include<stdio.h>

double SquareMeter(int iNo)
{
    double Squaremeter = 0.0929 * iNo;
    return Squaremeter;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter SquareFeet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("SquareFeet to Squaremeter : %lf\n",dRet);
    return 0;
}