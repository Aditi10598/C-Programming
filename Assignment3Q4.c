// Accept one character from user and convert case of that character

#include<stdio.h>

 void DisplayConvert(char CValue)
 {
    if(CValue>='a' && CValue<='z')
    {
        printf("%c",CValue-('a'-'A'));
    }
    else if(CValue>='A'&& CValue<='Z')
    {
        printf("%c",CValue+('a'+'A'));
    }
 }

int main()
{
    char cValue='\0';
    printf("enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}