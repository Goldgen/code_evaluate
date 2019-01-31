#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    scanf("%d",&b);
    int a[b],e[b+1];
    int i=0, c, d;
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<b;i++)
        e[i]=a[i];

    scanf("%d %d",&c,&d);
    e[c]=d;
    for(i=c+1;i<b+1;i++)
        e[i]=a[i-1];

    for(i=0;i<b;i++)
        printf("%d ",e[i]);

    printf("%d",e[b]);
}