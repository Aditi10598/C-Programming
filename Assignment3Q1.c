// Accept N numbers from user and return differnce between summation of even elemnets and summation of odd elements

#include<stdio.h>

void Display (int Arr[],int iLength)
{
    int iCnt=0,iSeven=0,iSodd=0,idiff=0;

    for(iCnt=0;iCnt<iLength;iCnt++);
    {
        
        if(Arr[iCnt]%2==0)
        {
            iSeven=iSeven+iCnt;
        }
        else
        {
            iSodd=iSodd+iCnt;
        } 

        idiff= iSeven- iSodd;
    }

}
int main()
{
    int iSize=0,iLength=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize *sizeof(int));
    if (p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("enter %d elemts ",iLength);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}
