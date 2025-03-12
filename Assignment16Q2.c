//Accept N numbers from user and return the Smallest number

#include<stdio.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt=0,iMin=Arr[0];

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
       if (Arr[iCnt] < iMin)
        {
           iMin=Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iLength=0, iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength *sizeof(int));
    if (p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("enter elements:\n ",iLength);
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=Minimum(p,iLength);

    printf("Smallest Number is %d",iRet);

    free(p);

    return 0;
}
