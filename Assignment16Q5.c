//Accept N numbers from user and Display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iSize)
{
    int iCnt=0,isum=0,idigit=0,iNo=0; 

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iNo=Arr[iCnt];
        while(iNo>0)
        {
            idigit=iNo%10;
            isum=isum +idigit;
            iNo=iNo/10;    
        }
        printf("%d",isum,Arr[iCnt]);
    }
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

    DigitsSum(p,iLength);

    free(p);

    return 0;
}
