//accept number user and display pattern

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    int iCount=0;
   
    if(iNo<0)
    {
        iNo=-iNo;
    }

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
        printf("*\t",iCnt);
       
   }
   for(iCount=1;iCount<=iNo;iCount++)
   {
        printf("#\t",iCnt);
       
   }
}
int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}