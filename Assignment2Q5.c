#include<stdio.h>
#define TRUE 1;
#define FALSE 0;

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}
int main()
{
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet= ChkEven(iValue);
    return 0;
}