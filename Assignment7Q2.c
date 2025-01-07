/*Amount in us dollar and return its value in Indian currency
consider 1 $ as 70 rupees*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar=0;

    iDollar=iNo*70;

    return iDollar;
}

int main()
{
    int iValue=0, iRet =0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet= DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return 0;
}