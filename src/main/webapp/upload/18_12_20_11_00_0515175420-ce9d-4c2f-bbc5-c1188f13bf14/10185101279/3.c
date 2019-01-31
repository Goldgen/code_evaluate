#include<stdio.h>
int mi;
int sum;
int Min(int *a,int n)
{
    if(a[n]<mi)mi=a[n];
    if(n==1)return 0;
    Min(a,n-1);
    return 0;
}
int Sum(int *a,int n)
{
    sum+=a[n];
    if(n==1)return 0;
    Sum(a,n-1);
    return 0;
}
int a[105];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    mi=a[1];
    sum=0;
    Min(a,n);
    Sum(a,n);
    printf("%d %d",mi,sum);
}
