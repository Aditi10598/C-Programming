//program which aceept range  and return addition of all numbers(range should contain positive number)

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt=0, iSum=0;
    if(iStart<0)
    {
        printf("Invalid Range\n");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1=0, iValue2=0, iRet=0;
  
    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);
    printf("Addition is :%d",iRet);

    return 0;
}