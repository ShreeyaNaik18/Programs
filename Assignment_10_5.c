//Write a program which accept temperature in fahrenheit and convert it into celsius
//iCelsius = (fahrenheit -39) * 5)/9;)
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iCelsius = ((fTemp - 32) * 5)/9;
    return iCelsius;

}
int main()
{
    float iValue = 0.0;
    double dRet = 0.0;
    printf("Enter temperature in  Fahrenheit\n");
    scanf("%f",&iValue);

    dRet = FhtoCs(iValue);

    printf("Temperature From Fahrenheit to Celsius : %lf\n",dRet);
    return 0;
}