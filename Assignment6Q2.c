// accept single digit number from user and print it into word

#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo= -iNo;
    }
    if(iNo<=0 && iNo>9)
    {
        printf("ivalid number\n");
    }
    else{
    switch (iNo) 
    {
            case 0:
                printf("Zero\n");
                break;
            case 1:
                printf("One\n");
                break;
            case 2:
                printf("Two\n");
                break;
            case 3:
                printf("Three\n");
                break;
            case 4:
                printf("Four\n");
                break;
            case 5:
                printf("Five\n");
                break;
            case 6:
                printf("Six\n");
                break;
            case 7:
                printf("Seven\n");
                break;
            case 8:
                printf("Eight\n");
                break;
            case 9:
                printf("Nine\n");
                break;
    }
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
