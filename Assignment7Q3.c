// program to find even factorial of given number

#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
        if((iCnt%2)==0)
        iFact =iCnt*iFact;
        
   }
        return iFact;
}
void main()
{
    int iValue=0 ,iRet=0;
    
    printf("enter number");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("Even factorial of number is: %d\t",iRet);
    return 0;
}