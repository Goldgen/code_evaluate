#include <stdio.h>

int Min (int arr[ ],int n)
{
    static int i=0;
    if(n==0)
        return *(arr+i);
    if(*(arr+i)>*(arr+n-1))
        i=n-1;
    return Min(arr,--n);
}

int Sum (int arr [ ], int n)
{
    static int sum=0;
    if(n==0)
        return sum;
    sum+=*(arr+n-1);
    return Sum(arr,--n);
}

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    while(i<n)
        scanf("%d",arr+i++);
    printf("%d %d",Min(arr,n),Sum(arr,n));
    return 0;
}
