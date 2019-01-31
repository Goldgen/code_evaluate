#include <stdio.h>
int main()
{
    int n,i,st,p;
    scanf("%d",&n);
    int a[n],b[n+1];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d %d",&st,&p);
    for(i=0;i<st;i++)b[i]=a[i];
    b[st]=p;
    for(i=st+1;i<n+1;i++)b[i]=a[i-1];
    for(i=0;i<n+1;i++){
        if(i==n)printf("%d",b[i]);
        else printf("%d ",b[i]);
    }
    return 0;
}
