#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=n;i>a;--i)
    {
        arr[i]=arr[i-1];
    }
    arr[a]=b;
    for(int i=0;i<n+1;++i)
    {
        if(i==n)
            printf("%d",arr[i]);
        else
            printf("%d ",arr[i]);
    }
    return 0;
}