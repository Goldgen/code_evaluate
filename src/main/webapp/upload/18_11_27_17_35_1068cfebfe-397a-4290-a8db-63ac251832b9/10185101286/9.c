#include<stdio.h>
#include<string.h>
int main()
{
    int shu1[1000]={0};
    int shu2[1000]={0};
    int sum[1000]={0};
    char shua,shub;
    int i=0;
    int j=0;
    int k=0;
    int a=0;
    static int b=0;
    shua=getchar();
    while(shua!='\n')
    {
     shu1[i]=shua-'0';
     shua=getchar();
     ++i;
    }
    shub=getchar();
    while(shub!='\n')
    {
     shu2[j]=shub-'0';
     shub=getchar();
     ++j;
    }
    if(i>j)
    {
     a=i;
    }
    else
    {
     a=j;
    }
    for(k=a-1;k>0;--k)
    {
    sum[k]=shu1[k]+shu2[k]+b;
    if(sum[k]>=10)
    {
    sum[k]=sum[k]-10;
    b=1;
    }
    else
    {
    b=0;
    }
    }
    sum[0]=shu1[0]+shu2[0]+b;
    for(k=0;k<a;++k)
    {
    printf("%d",sum[k]);
    }
    return 0;
}