// accept number from user and display its table

#include<stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    int iTable=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=1;iCnt<=10;iCnt++)
   {
        iTable=iCnt*iNo;
        printf("%d\t",iTable);
   }

}
void main()
{
    int iValue=0;
    
    printf("enter number");
    scanf("%d",&iValue);
    
    Table(iValue);
    return 0;
}