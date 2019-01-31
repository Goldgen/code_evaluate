#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,min,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;++i)
    {
        if(min>arr[i])
            min=arr[i];
    }
    for(i=0;i<n;++i)
    {
        sum+=arr[i];
    }
    printf("%d %d",min,sum);
    return 0;
}