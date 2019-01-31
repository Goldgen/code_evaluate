#include <stdio.h>
int sum(int *a,int n);
int min(int *a,int n);
int main()
{int n,a,b,i;
scanf("%d",&n);
int data[n];
for(i=0;i<n;i++)
scanf("%d",&data[i]);
a=sum(data,n);
b=min(data,n);
printf("%d %d",b,a);
return 0;}
int sum(int *a,int n)
{int m=0,j;
for(j=0;j<n;j++)
m+=a[j];
return m;}
int min(int *a,int n)
{int m=a[0],i;
for(i=1;i<n;i++)
m=a[i]<m?a[i]:m;
return m;}