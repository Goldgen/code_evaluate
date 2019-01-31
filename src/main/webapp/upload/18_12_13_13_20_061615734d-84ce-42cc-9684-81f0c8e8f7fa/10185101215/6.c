#include<stdio.h>
#include<string.h>
int main()
{
    int *a,b[1000];
    int n,i,x;
    a=b;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    for(i=n-x;i<n;i++)
        printf("%d ",*(a+i));
        for(i=0;i<n-x-1;i++)
            printf("%d ",*(a+i));
        printf("%d",*(a+n-x-1));
 return 0;
}