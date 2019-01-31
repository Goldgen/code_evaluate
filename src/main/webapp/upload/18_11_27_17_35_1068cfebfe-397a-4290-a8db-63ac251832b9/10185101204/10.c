#include <stdio.h>
int main()
{int t,n;
scanf("%d",&n);
int num[n];
for(int i=0;i<n;i++)
scanf("%d",&num[i]);
for(int i=0;i<n-1;i++)
{for(int j=0;j<n-i-1;j++)
{if(num[j]>num[j+1])
{t=num[j+1];
num[j+1]=num[j];
num[j]=t;}}}
for(int i=0;i<n-1;i++)
printf("%d ",num[i]);
printf("%d",num[n-1]);
return 0;
}