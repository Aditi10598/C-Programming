// Accept N numbers from user check whether that numbers contains 11 in it or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]==11)
       {
            return TRUE;
       }
    }

    return FALSE;
}
int main()
{
    int iLength=0,iCnt=0,iRet=0;
    int *p=NULL;
    BOOL bRet= FALSE;

    printf("Enter number of elements");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength *sizeof(int));
    if (p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("enter elements:\n ");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iLength);
    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);
    return 0;

}
