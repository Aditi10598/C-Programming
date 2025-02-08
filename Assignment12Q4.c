// program which accept number from user and return multiplication of all digits

#include<stdio.h>

int MultDigit(int iNo)
{
    int iCount=1, iDgit=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
            iDgit=iNo%10;
            if(iDgit !=0)
            {
                iCount=iCount*iDgit;
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

    iRet=MultDigit(iValue);

    printf("%d",iRet);

    return 0;
}