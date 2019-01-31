#include<stdio.h>
int m (int a[], int n)
{
    int x;
    if(n==1)
        return a[n-1];
        x=m(a,n-1);
        return x<a[n-1]?x:a[n-1];
}
int s(int * a,int n)
{
    if(n==0)
        return 0;
    return *a+s(a+1,n-1);
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("%d %d",m(a,n),s(a,n));
    return 0;
}