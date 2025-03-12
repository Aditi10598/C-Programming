// Accept N numbers from user and return the differnce between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Diff(int Arr[],int iSize)
{
    int iCnt=0,iMin=Arr[0],iMax=Arr[0],idiff=0;

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
       if (Arr[iCnt] < iMin)
        {
           iMin=Arr[iCnt];
        }
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return idiff=iMax-iMin;
}
int main()
{
    int iLength=0, iRet=0, iCnt=0;
    int *p=NULL;

    printf("Enter number of elements");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength *sizeof(int));
    if (p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("enter elements:\n");
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=Diff(p,iLength);

    printf("differnce is %d",iRet);

    free(p);

    return 0;
}
