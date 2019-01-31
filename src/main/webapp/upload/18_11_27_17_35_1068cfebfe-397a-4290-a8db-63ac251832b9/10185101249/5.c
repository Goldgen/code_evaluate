#include <stdio.h>
int main()
{
    int i,n,x,y;
    scanf("%d",&i);
    int a[]={0};
    for(n=0;n<i;n++)
    {
        scanf("%d",&a[n]);
    }
    scanf("%d %d",&x,&y);
    for(n=i;n>x;n--)
    {
        a[n]=a[n-1];
    }
    a[x]=y;
    for(n=0;n<=i;n++)
    {
        printf("%d",a[n]);
        if(n<i)
            printf(" ");
    }
    return 0;
}
