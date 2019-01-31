#include <stdio.h>
#include <math.h>

int main()
{
int n;
int i=0;
int k,d;
scanf("%d",&n);
int a[n];
n=n+1;
int b[n];
n=n-1;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
scanf("%d",&k);
for(i=k;i<n;i++)
    b[i+1]=a[i];
scanf("%d",&d);
b[k]=d;
for(i=0;i<k;i++)
    b[i]=a[i];
for(i=0;i<n;i++)
    printf("%d ",b[i]);
printf("%d",b[n]);
    return 0;
}

