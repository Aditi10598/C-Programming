#include <stdio.h>
void Display(int iNo,int iFrequency)
{
    int i=0;
    for(i=0;i<=2;i++)
    {
        printf("%d\t" ,iFrequency);
    }

}
int main()
{
    int iValue=0;

    int iCount=0;

    printf("Enter number");
    scanf("%d\n",&iValue);

    printf("Enter frequency");
    scanf("%d\n",&iCount);

    Display(iValue,iCount);

    return 0;


}