//Accept N number from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt=0,iMult=1;

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
       if (Arr[iCnt]%2!=0)
        {
           iMult=iMult*Arr[iCnt];
        }
    }
    return iMult;
}
int main()
{

    int iLength=0,iCnt=0,iRet=0;
    int *p=NULL;

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
        printf("enter element :%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Product(p,iLength);
    printf("Product of odd is %d",iRet);

    free(p);

    return 0;
}
