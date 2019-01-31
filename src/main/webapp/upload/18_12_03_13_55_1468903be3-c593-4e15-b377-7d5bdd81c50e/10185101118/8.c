#include<stdio.h>
#include<string.h>
int main()
{
    char s[83],*a,*b;
    fgets(s,83,stdin);
    int t,i;
    t=strlen(s);
    t--;
    a=s;
    b=&s[t-1];
    for (i=0; i<t/2+1; i++)
        if (*a++!=*b--) break;
    if (i==t/2+1) printf("True");
    else printf("False");
    return 0;
}
