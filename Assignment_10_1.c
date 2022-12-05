//Write a program which accept radius of circle from user and calculate its area
//consider vslue of pi = 3.24(Area = PI *Radius*Radius)
#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = PI * fRadius * fRadius;
    return Area;

}
int main()
{
    float fValue = 0;
    double dRet = 0.0;
    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is : %f\n",dRet);
    return 0;
}