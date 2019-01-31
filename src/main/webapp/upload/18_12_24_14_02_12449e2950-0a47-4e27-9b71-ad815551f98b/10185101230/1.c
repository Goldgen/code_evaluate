#include <stdio.h>
#include <stdlib.h>
struct ty
{
    char s[100];
    char a[10];
    char m[50];
};
int main()
{
    struct ty sss;
    gets(sss.s);
    gets(sss.a);
    gets(sss.m);
    printf("name is \"%s\", price is $%s, press is \"%s\"",sss.s,sss.a,sss.m);
    return 0;
}
