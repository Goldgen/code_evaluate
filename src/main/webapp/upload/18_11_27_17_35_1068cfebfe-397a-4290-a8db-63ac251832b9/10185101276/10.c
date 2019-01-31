#include <stdio.h>
int main()
{
    int n,i;
    int e,tmp;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
        for(e=0;e<n-i-1;e++)
    {
        if(a[e]>a[e+1]){
            tmp=a[e];
            a[e]=a[e+1];
            a[e+1]=tmp;
        }
    }
    for (i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else printf("%d ",a[i]);
    }
    return 0;
}
