#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],i,j,k,t,max;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
for(j=0;j<n-i;j++)
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
max=1;
for(i=0;i<n;i=j)
{
j=i+1;
k=1;
while( j<n && a[j]==a[i] )
{
j++;
k++;
}
if(max<k)
max=k;
}
printf("%d",max);
return 0;
}