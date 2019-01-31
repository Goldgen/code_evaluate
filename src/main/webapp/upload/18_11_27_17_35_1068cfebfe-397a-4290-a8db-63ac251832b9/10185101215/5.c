#include<stdio.h>
#include<math.h>
int main()
{
    int a[1024],z[1024],y,x,i,b,c;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        a[i]=y;
    }
    scanf("%d%d",&b,&c);
    z[b]=c;
     for(i=0;i<b;i++)
      z[i]=a[i];
    for(i=b;i<x;i++)
      z[i+1]=a[i];
    for(i=0;i<x+1;i++)
    {
        if(i<x)
            printf("%d ",z[i]);
        else
            printf("%d",z[i]);

    }
    return 0;
}