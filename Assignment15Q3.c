//Accept N number from user and accept one another number as NO and return index of last occurance of that NO

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iSize,int NO)
{
    int iCnt=0, iFrequency=0;

   
    for(iCnt=iSize-1;iCnt>0;iCnt--)
    {
       
       if (Arr[iCnt]==NO)
        {
           return iCnt;
        }
        
    }
        return -1 ;
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

    iRet=FirstOcc(p,iLength,ivalue);
    if(iRet==-1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("last occurance is :%d\n",iRet);  
    }

    
    free(p);

    return 0;
}
