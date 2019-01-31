#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    while(scanf("%d",&x)==1)
    {
        int a[1024],y,i,b=1,j,c=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        a[i]=y;
    }
    for(i=0;i<x;i++)
    {
        c=0;
        for(j=0;j<x;j++)
        {
        if(a[i]==a[j])
        c++;
       }
       if(b>c)
        b=b;
       else
        b=c;
    }
        printf("%d",b);
    }
    return 0;
}