// accept number from user and display its table in reverse order

#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt=0;
    int iTable=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
   for(iCnt=10;iCnt>=1;iCnt--)
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
    
    TableRev(iValue);
    return 0;
}