#include<stdio.h>
#include<string.h>
int main()
{
    int a[201]={0},b[201]={0},c,d,e,m[201]={0},x=0,y=0,i,v;
    char a1[201],b1[201];
    scanf("%s %s",a1,b1);
    c=strlen(a1);
    d=strlen(b1);
    e=(c>d)?c:d;
    for (i=c-1; i>=0; i--)
        a[x++]=a1[i]-'0';
    for (i=d-1; i>=0; i--)
        b[y++]=b1[i]-'0';
    for (i=0; i<e; i++)
        m[i]=a[i]+b[i];
    for (i=0; i<e; i++)
    {
        if (m[i]>=10)
        {
            m[i]=m[i]%10;
            m[i+1]=m[i+1]+1;
        }
    }
    for (v=e; v>=0; v--)
        if (m[v]!=0) break;
    if (-1==v) printf("%d",0);
    else
        for(;v>=0;v--)
            printf("%d",m[v]);
    return 0;
}
