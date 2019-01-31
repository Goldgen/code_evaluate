#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i,j;
    int sum=0;
    scanf("%d",&n);
    int arr[n],num[n];
    for(i=0;i<=(n-1);++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=(n-1);++i)
    {
        a=arr[i];
        for(j=0;j<=(n-1);++j)
        {
            if(arr[j]==a)
                 ++sum;
        }
        num[i]=sum;
        sum=0;
    }
    int max=num[0];
    for(i=1;i<=(n-1);++i)
    {
        if(num[i]>max)
            max=num[i];
    }

    printf("%d",max);
    return 0;
}
