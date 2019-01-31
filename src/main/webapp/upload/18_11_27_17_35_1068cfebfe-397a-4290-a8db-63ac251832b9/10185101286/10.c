#include<stdio.h>
int main()
{
    int shu1[1000]={0};
    int a,b,c,i,j;
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
     scanf("%d",&b);
     shu1[i]=b;
    }
    for(j=0;j<a-1;++j)
    {
     for(i=0;i<a-1-j;++i)
     {
      if(shu1[i]>shu1[i+1])
     {
      c=shu1[i];
      shu1[i]=shu1[i+1];
      shu1[i+1]=c;
     }
     }
    }
    for(i=0;i<a-1;++i)
    {
     printf("%d ",shu1[i]);
    }
    printf("%d",shu1[a-1]);
    return 0;
}