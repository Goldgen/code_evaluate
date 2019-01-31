#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(65<=a&&a<=90)
    {
        a=a+'a'-'A';
        printf("%c",a);
    }
    else printf("ERROR");
    return 0;
}