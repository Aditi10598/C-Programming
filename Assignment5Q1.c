// write a program which aceepts number from user and print that number of $ & * on screen

#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt =0;
   for (iCnt=1;iCnt<=iNo;iCnt++)
   {
        printf("$ *",iCnt);
   }

}

int main()
{
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Pattern(iValue); 
    return 0;
}
