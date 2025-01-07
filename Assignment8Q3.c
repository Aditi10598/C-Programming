//program which accepts distance in kilometer and convert into meter
//1km=1000m

#include<stdio.h>

int KmToMeter(int iNo)
{
    int iMeter=0;

    iMeter=iNo*1000;

    return iMeter;
}

int main()
{
    int iValue=0, iRet =0;

    printf("Enter kilometer");
    scanf("%d",&iValue);

    iRet=KmToMeter(iValue);
    printf("iMeter is %d",iRet);

    return 0;
}