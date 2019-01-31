#include <stdio.h>

int main()
{
 int n,digit,b;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
scanf("%d %d",&digit,&b);
for(int k=0;k<n;++k){
    if(k==digit&&k!=n-1)
        printf("%d %d ",b,a[k]);
    else if(k!=n-1&&k!=digit)
        printf("%d ",a[k]);
    else if(k==n-1&&k!=digit)
        printf("%d",a[k]);
    else if(k==digit&&k==n-1)
        printf("%d %d",b,a[k]);}
    if(n==digit)
        printf(" %d",b);

  return 0;
}



