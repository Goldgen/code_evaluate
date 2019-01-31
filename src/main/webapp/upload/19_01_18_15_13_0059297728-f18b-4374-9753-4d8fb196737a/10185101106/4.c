#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch<97&&ch>64)
    {ch=ch+32;
    printf("%c",ch);}
    else
        printf("ERROR");
    return 0;
}