//program which aceepts number from user and count frequency of such digit which are less than 6

#include<stdio.h>
int CountTwo(int iNo)
{
    int iFreqency=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        if(iNo%10<6)
        {
            iFreqency++;
        }
        iNo=iNo/10;
    }
    
    return iFreqency;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);

    printf("number of 4 :%d\n",iRet);

    return 0;
}

