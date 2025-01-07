/*program which accepts width and height of reactangle from user and calculte
its area (Area =Width * height)
*/
#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dRectArea=0;

    dRectArea= fWidth *fHeight;
    return dRectArea;
}

int main()
{
    float fValue1=0.0, fValue2=0.0;
    double dRet=0.0;



    printf("Enter width");
    scanf("%f",&fValue1);

    printf("Enter height");
    scanf("%f",&fValue2);


    dRet= RectArea(fValue1,fValue2);
    printf("Area of rectangle is: %.2f\n",dRet);

    return 0;
}