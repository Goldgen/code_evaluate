#include<stdio.h>
void put(char *p)
{
    *p=getchar();
    if (*p!='?')
    {
        put(++p);
        printf("%c",*--p);
    }
}
int main()
{
    char a[100],*p=a;
    put(p);
    return 0;
}
