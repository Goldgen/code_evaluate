#include <stdio.h>
int main()
{
    char a=0;
    char b=0;
    scanf("%c",&a);
    if(a>=65&&a<=90)
    {
        b=a-'A'+'a';
        printf("%c",b);
    }
    else
        printf("ERROR");
    return 0;
}
