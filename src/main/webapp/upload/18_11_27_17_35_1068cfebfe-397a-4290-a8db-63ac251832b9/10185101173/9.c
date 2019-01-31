#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int k=0,k1=0,j=0,j1=0,cha=0,i=0,n=0;
    char a[1000]={'0'},b[1000]={'0'},sum[100]={'0'};
    while((a[k]=getchar())!='\n')
        ++k;
    --k;k1=k;
    while((b[j]=getchar())!='\n')
        ++j;
    --j;j1=j;
    if(strlen(a)>strlen(b))
    {
        cha=strlen(a)-strlen(b);
        for(int l=0;l<=j1;++l)
        {
            b[j+cha]=b[j];
            b[j]='0';
            --j;
        }
    }
    else if(strlen(a)<strlen(b))
    {
        cha=strlen(b)-strlen(a);
        for(int l=0;l<=k1;++l)
        {
            a[k+cha]=a[k];
            a[k]='0';
            --k;
        }
    }
    int temp=0,c,sum1;
    (strlen(a)>strlen(b))?(c=strlen(a)-2):(c=strlen(b)-2);
    for(i=c;i>=0;--i)
    {
        sum1=((int)a[i]-48)+((int)b[i]-48)+temp;
        if(sum1>=10)
            temp=1;
        else
            temp=0;
        sum[n]=(char)(sum1%10+48);
        ++n;
    }
    if(temp==1)
    {
        sum[c+1]='1';
        for(i=c+1;i>=0;--i)
        {
            printf("%c",sum[i]);
        }
    }
    else
    {
        for(i=c;i>=0;--i)
        {
            printf("%c",sum[i]);
        }
    }
    return 0;
}
