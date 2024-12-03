#include<stdio.h>
void Display(int iNo)
{
    while (iNo>0)
    {
        printf("*");
        iNo--;
    }
    
}

int main()
{
    int ivalue=0;

    printf("enter number");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}