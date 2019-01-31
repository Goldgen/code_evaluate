#include<stdio.h>
int main()
{
    int shu1[1000]={0};
    int shu2[1000]={0};
    int a,b,c,i;
    int d=-1;
    static int e=0;
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
     shu2[e]=i;
     d=0;
     ++e;
    }
    }
    if(d==-1)
    {
     printf("ERROR");
    }
    else
    {
    for(i=0;i<e-1;++i)
    {
    printf("%d ",shu2[i]);
    }
    printf("%d",shu2[e-1]);
    }
    return 0;
}