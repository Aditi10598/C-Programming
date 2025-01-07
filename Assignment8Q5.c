/* write A PROGRAM WHICH ACCEPTS AREA IN SQUARE FEET and convert it into
square meter
1 square feet =0.0929 Square meter
*/
#include<stdio.h>
double SquareMeter(int iValue)
{
    double dSmeter=0.0;

    dSmeter=iValue *0.0929;

    return dSmeter;
}

int main()
{
    int iValue=0;
    double dRet =0.0;

    printf("Enter Area in Square feet");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("Area in Squremeter is: %.2f\n",dRet);

    return 0;
}
