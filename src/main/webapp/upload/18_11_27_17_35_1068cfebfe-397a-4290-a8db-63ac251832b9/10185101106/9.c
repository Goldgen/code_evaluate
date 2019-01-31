#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000];
    int c[1000]={0},d[1000]={0},m,n,p,q,i,j;
    gets(a);
    gets(b);
    m=strlen(a);
    n=strlen(b);
    p=m>n?m:n;
    q=p;
    j=q;
    for(i=0;i<m;p--,i++)
    {
        c[p-1]=a[m-1-i]-'0';
    }
    for(i=0;i<n;q--,i++)
    {
        d[q-1]=b[n-1-i]-'0';
    }
    for(i=j-1;i>0;i--)
    {
        c[i]+=d[i];
        if(c[i]>9)
        {
            c[i]-=10;
            c[i-1]++;
        }
    }
    c[0]+=d[0];
    printf("%d",c[0]);
        for(i=1;i<j;i++)
    {
        printf("%d",c[i]);
    }

    return 0;
}