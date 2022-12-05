//Write a program which accepts distance in kilometer and convert it int meter
//(ikilometer = 1000 meter)
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Distance = 1000 * iNo;
    return Distance;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("KM to Meter : %d\n",iRet);
    return 0;
}