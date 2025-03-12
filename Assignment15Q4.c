//Accept N number from user and range and Display all the elments from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    
    if(iStart<0) iStart=0;
    if(iEnd>=iSize) iEnd=iSize-1;
   
   printf("range is:");
    for(int iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d",Arr[iCnt]);
    }  
   printf("\n");     
}
int main()
{
    int iLength=0,iCnt=0,ivalue1=0,ivalue2=0;
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

    printf("enter the first no of range");
    scanf("%d",&ivalue1);

    printf("enter the last no of range");
    scanf("%d",&ivalue2);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("enter element :%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iLength,ivalue1,ivalue2);
    
    free(p);

    return 0;
}

