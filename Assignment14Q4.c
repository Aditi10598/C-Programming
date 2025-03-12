//Accept N number from user and return frequency of 11 in it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt=0, iFrequency=0;

   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       
       if (Arr[iCnt]==11)
        {
           iFrequency++;
        }
        
    }
        return iFrequency ;
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
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iLength);
    printf("frequency of 11 is :%d\n",iRet);  

    free(p);

    return 0;
}
