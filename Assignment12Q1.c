// program which accept number from user and return the count of even digits

#include<stdio.h>

int CountEven(int iNo)
{
    int iCount=0, iDigit=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        
            if(iDigit%2==0)
            {
            iCount++;
            }
        
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);

    printf("%d",iRet);

    return 0;
}