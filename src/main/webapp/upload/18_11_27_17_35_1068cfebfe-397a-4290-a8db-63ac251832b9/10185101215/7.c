#include<stdio.h>
#include<math.h>
int main()
{
    int a[1024],z[1024],y,x,i,b,c=0;
    while(scanf("%d",&x)==1)
    {
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        a[i]=y;
    }
    scanf("%d",&b);
    for(i=0;i<x;i++)
        if(b==a[i])
            {
            z[c]=i;
            c++;
            }
    if(c!=0)
    {
        for(i=0;i<c-1;i++)
            printf("%d ",z[i]);
        if(i==c-1)
            printf("%d",z[i]);
    }
    if(c==0)
        printf("ERROR");
    }
    return 0;
}