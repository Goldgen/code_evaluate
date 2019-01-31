#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
int min(int *p,int n)
{
    int i,min;
    min=0;
    for(i=0;i<n;i++)
    {
        if(p[min]>p[i])
            min=i;
    }
    return p[min];
}
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[SIZE];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",min(arr,n));
    for(i=0;i<n;i++)
        sum+=arr[i];
    printf(" %d",sum);
    return 0;
}
