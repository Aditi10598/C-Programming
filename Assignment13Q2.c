//Accept N number from user and display all such elemnts which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt=0;

    printf("numbers divisible by are:") ;
    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        
        if((Arr[iCnt])%5==0)
        {
            printf("%d",iCnt);
        }
    
    }
          
}
int main()
{
    int iLength=0,iCnt=0;
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

    Display(p,iLength);


    free(p);

    return 0;
}
