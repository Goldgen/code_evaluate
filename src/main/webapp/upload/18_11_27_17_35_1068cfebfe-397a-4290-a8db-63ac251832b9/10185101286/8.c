#include<stdio.h>
int main()
{
    int shu1[1000]={0};
    int shu2[1000]={0};
    int a,b,c,i;
    int d=1;
    static int e=0;
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
     scanf("%d",&b);
     shu1[i]=b;
    }
    for(i=0;i<a;++i)
    {
     if(shu1[i]==shu1[i+1])
    {
     ++d;
    }
    else
    {
    shu2[e]=d;
    d=1;
    ++e;
    }
    }
    c=shu2[0];
    for(i=0;i<e-1;++i)
    {
    if(c>shu2[i])
    {
    c=c;
    }
    else
    {
    c=shu2[i];
    }
    }
    printf("%d",c);
    return 0;
}