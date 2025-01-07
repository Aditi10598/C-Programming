// differnce between even and odd factorials
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEvenFact=1;
    int iOddfact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
        if((iCnt%2)==0)
            iEvenFact =iCnt*iEvenFact;
        else
        {
            iOddfact=iCnt*iOddfact;
        }
   }
        return iEvenFact-iOddfact;
}
void main()
{
    int iValue=0 ,iRet=0;
    
    printf("enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("factorial Differnce is: %d\t",iRet);
    return 0;
}