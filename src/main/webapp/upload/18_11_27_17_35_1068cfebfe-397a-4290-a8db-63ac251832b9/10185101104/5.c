#include <stdio.h>

int main()
{
    int i,mark,n,extra,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d %d",&mark,&extra);
    for(i=0;i<n;i++)
    {
        if(i==mark)
            printf("%d ",extra);
        if(i==n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }
    if(mark==n)
        printf(" %d",extra);
    return 0;
}
