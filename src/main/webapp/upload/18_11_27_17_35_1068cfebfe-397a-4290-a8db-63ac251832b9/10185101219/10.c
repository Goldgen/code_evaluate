#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,varie;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(int u=1;u<n;++u)
    for(int k=0;k<n-u;++k)
    {
        if(a[k]>a[k+1]){
        varie=a[k];
        a[k]=a[k+1];
        a[k+1]=varie;}
        }
    printf("%d",a[0]);
    for(int d=1;d<n;++d)
    printf(" %d",a[d]);
    return 0;
}
