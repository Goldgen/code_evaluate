#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[101]={0};
    char b[101]={0};
    int c[101]={0};
    int i1=1,i2=1,i4;

    while((a[i1]=getchar())!='\n')
    {
        i1++;
    }
    while((b[i2]=getchar())!='\n')
    {
        i2++;
    }
    if(i1>=i2)
    {
        int t1=i1,t2=i2;
        while(t2>0)
        {
            c[t1]=a[t1]-'0'+b[t2]-'0';
            if(c[t1]>=10)
            {
                c[t1]=c[t1]-10;
                c[t1-1]=c[t1-1]+1;
            }
            t1--;
            t2--;
        }
        for(int i=i1-i2;i>0;--i)
        {
            c[i]=a[i]-'0';
        }
    }
    else if(i1<i2)
    {
        int t1=i1,t2=i2;
        while(t1>0)
        {
            c[t2]=a[t1]-'0'+b[t2]-'0';
            if(c[t2]>=10)
            {
                c[t2]=c[t2]-10;
                c[t2-1]=c[t2-1]+1;
            }
            t1--;
            t2--;
        }
        for(int i=i2-i1;i>0;--i)
        {
            c[i]=a[i]-'0';
        }
    }
if(i1<=i2)
    i1=i2;
else
    i1=i1;

    if(c[0]!=0)
        printf("%d",c[0]);
    for(i4=1;i4<i1;++i4)
        printf("%d",c[i4]);
    return 0;
}