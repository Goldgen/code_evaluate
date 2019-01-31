#include<stdio.h>
#include<string.h>
int f(char *str, char *substr)
{
    int  n;
    char  *p, *r;
    n = 0;
    while (*str)
    {
        p = str;
        r = substr;
        while (*r)
            if (*r == *p)
            {
                r++;
                p++;
            }
            else
                break;
        if (*r == '\0')
            n++;
        str++;
    }
    return n;
}
int main()
{
    char s1[80],s2[80];
    gets(s1);
    gets(s2);
    char *a;
    a=s1;
    printf("%s: %d time(s), first at ",s2,f(s1,s2));
    if(strstr(s1,s2)==NULL)
        printf("-1");
    else
        printf("%d",strstr(s1,s2)-a);
    return 0;
}