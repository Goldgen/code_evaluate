#include <stdio.h>
int Min(int arr[],int n)
{
    int t;
    if(n==1)
        return arr[0];
    t=Min(arr,n-1);
    if(t<arr[n-1])
        return t;
    return arr[n-1];
}
int Sum(int arr[],int n)
{
    if(n==1)
        return arr[0];
    return arr[n-1]+Sum(arr,n-1);

}
int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d %d",Min(arr,n),Sum(arr,n));
    return 0;
}

