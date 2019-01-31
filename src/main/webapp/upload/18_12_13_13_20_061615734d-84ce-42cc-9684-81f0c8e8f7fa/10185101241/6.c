#include <stdio.h>

int main()
{
    int i,j,x;
    scanf("%d %d\n",&i,&j);
    int a[i],b[i];
    for(x=0;x<i;x++)
    {
        scanf("%d",&a[x]);
    }
    for(x=0;x<i;x++)
    {
        if(x+j>i-1) b[x+j-i]=a[x];
        else if(x+j<=i-1) b[x+j]=a[x];
    }
    for(x=0;x<i;x++)
    {
        if(x!=i-1) printf("%d ",b[x]);
        else if(x==i-1) printf("%d",b[x]);
    }
    return 0;
}
