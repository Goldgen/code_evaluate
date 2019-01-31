#include<stdio.h>
int main()
{
    int shu1[1000]={0};
    int shu2[1000]={0};
    int a,b,c,i;
    int d=-1;
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
     scanf("%d",&b);
     shu1[i]=b;
    }
    scanf("%d",&c);
    for(i=0;i<a;++i)
    {
     if(shu1[i]==c)
    {
     d=i;
     break;
    }
    }
    if(d==-1)
    {
     printf("ERROR");
    }
    else
    {
    for(i=0;i<d;++i)
    {
    shu2[i]=shu1[i];
    }
    for(i=d;i<a-1;++i)
    {
    shu2[i]=shu1[i+1];
    }
    for(i=0;i<a-2;++i)
    {
    printf("%d ",shu2[i]);
    }
    printf("%d",shu2[a-2]);
    }
    return 0;
}