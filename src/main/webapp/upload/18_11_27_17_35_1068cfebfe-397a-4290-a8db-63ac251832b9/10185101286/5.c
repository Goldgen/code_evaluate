#include<stdio.h>
int main()
{
    int shu1[1000]={0};
    int shu2[1000]={0};
    int a,b,c,d,i;
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
     scanf("%d",&b);
     shu1[i]=b;
    }
    scanf("%d",&c);
    scanf("%d",&d);
    for(i=0;i<c;++i)
    {
     shu2[i]=shu1[i];
    }
    shu2[c]=d;
    for(i=c+1;i<a+1;++i)
    {
     shu2[i]=shu1[i-1];
    }
    for(i=0;i<a;++i)
    {
     printf("%d ",shu2[i]);
    }
    printf("%d",shu2[a]);
    return 0;
}