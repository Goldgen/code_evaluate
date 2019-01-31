#include <stdio.h>
#include <stdlib.h>
int Min(int arr[],int n)
{
    int a=*arr;++arr;
    for(int i=1;i<n;++i)
    {
        if(a>*arr)
            a=*arr;
            ++arr;
    }
    return a;
}
int Sum(int arr[],int n)
{
    int a=*arr;++arr;
    for(int i=1;i<n;++i)
    {
        a+=*arr;
        ++arr;
    }
    return a;
}
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d %d",Min(arr,n),Sum(arr,n));
}
