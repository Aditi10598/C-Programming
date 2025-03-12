// Accept N numbers from user  and accept one another number as NO,check whether t
//NO is present or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iSize,int iNO)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       if(Arr[iCnt]==iNO)
       {
            return TRUE;
       }
    }

    return FALSE;
}
int main()
{
    int iLength=0,iCnt=0,iRet=0,ivalue=0;
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
    printf("enter the value of no");
    scanf("%d",&ivalue);


    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet=Check(p,iLength,ivalue);
    if(bRet==TRUE)
    {
        printf("%d is present",ivalue);
    }
    else
    {
        printf("%d is absent",ivalue);
    }

    free(p);
    return 0;

}

