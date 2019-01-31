#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100];
    int t,x=0;
    gets(a);
    t=strlen(a);
    for(int i=0;i<=t-1;i++)
    {
        a[i]=toupper(a[i]);
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            x=1;
    }
    if(x==1)printf("yes");
    else printf("no");
    return 0;
}
