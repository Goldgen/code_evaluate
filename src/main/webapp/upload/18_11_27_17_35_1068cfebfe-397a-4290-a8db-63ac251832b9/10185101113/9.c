#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[100],ch2[100];
    int a[100]={0},b[100]={0},m,n,p,q,i,j;
    gets(ch1);
    gets(ch2);
    m=strlen(ch1);
    n=strlen(ch2);
    p=m>n?m:n;
    q=p;
    j=q;
    for(i=0;i<m;p--,i++)
    {
        a[p-1]=ch1[m-1-i]-'0';
    }
    for(i=0;i<n;q--,i++)
    {
        b[q-1]=ch2[n-1-i]-'0';
    }
    for(i=j-1;i>0;i--)
    {
        a[i]+=b[i];
        if(a[i]>9)
        {
            a[i]-=10;
            a[i-1]++;
        }
    }
    a[0]+=b[0];
    printf("%d",a[0]);
        for(i=1;i<j;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}