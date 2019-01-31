#include <stdio.h>

int main()
{
    int n,i,factor,index;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d %d",&index,&factor);
    for(i=n;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=factor;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("%d",a[n]);
    return 0;
}
