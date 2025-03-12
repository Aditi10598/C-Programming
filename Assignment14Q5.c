//Accept N number from user and accept one another number as NO and return frequency of NO from it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int NO)
{
    int iCnt=0, iFrequency=0;

   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       
       if (Arr[iCnt]==NO)
        {
           iFrequency++;
        }
        
    }
        return iFrequency ;
}
int main()
{
    int iLength=0,iCnt=0,iRet=0,ivalue=0;
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

    printf("enter the value of no");
    scanf("%d",&ivalue);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iLength,ivalue);
    printf("frequency of NO is :%d\n",iRet);  

    free(p);

    return 0;
}
