/* program which accpet temprature in fahrenheit and convert it into celcius
1 celcius =(Fahrenheit-32)*(5/9)#include<stdio.h>*/
#include<stdio.h>
double FhtoCs(float fTemp)
{
    double dCel=0.0;

    dCel=((fTemp-32)*(5.0/9));

    return dCel;
}

int main()
{
    float fValue=0.0;
    double dRet =0.0;

    printf("Enter temprature in Fahrenheit");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("temprature in celcius is: %.2f\n",dRet);

    return 0;
}
