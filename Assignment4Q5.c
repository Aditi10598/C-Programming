// write a program which accepts number from user and return diffrence between summation of all its factors and non factors

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;
  

    for(iCnt=1;iCnt<= iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSumFact =iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

   return iSumFact -iSumNonFact;
}


int main()
{
 int iValue=0;
 int iRet=0;

 printf("enter number :\n");
 scanf("%d",&iValue);

 iRet= FactDiff(iValue);

 printf("%d\n",iRet);

    return 0;
}