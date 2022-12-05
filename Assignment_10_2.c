//write a program which accepts width and height of recangle from user and calculate its area
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area = fWidth * fHeight;
    return Area;

}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    printf("Enter Width\n");
    scanf("%f",&fValue1);
    printf("Enter Height\n");
    scanf("%f",&fValue2);


    dRet = RectArea(fValue1, fValue2);

    printf("Area is : %f\n",dRet);
    return 0;
}