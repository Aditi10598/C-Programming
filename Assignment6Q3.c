// program to find factorial ogf given number

#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt=0;
    int iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
        iFact =iCnt*iFact;
        
   }
        return iFact;
}
void main()
{
    int iValue=0 ,iRet=0;
    
    printf("enter number");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("factorial of number is: %d\t",iRet);
    return 0;
}