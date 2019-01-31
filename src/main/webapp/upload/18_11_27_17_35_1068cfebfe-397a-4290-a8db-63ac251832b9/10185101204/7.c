#include <stdio.h>
int main()
{int n,a,b=0;
scanf("%d",&n);
int ff[n];
int ss[n];
for(int i=0;i<n;i++)
scanf("%d",&ff[i]);
scanf("%d",&a);
for(int i=0;i<n;i++)
{if(ff[i]==a)
{ss[b]=i;
b++;}
else if(i==n-1&&b==0)
{printf("ERROR");
return 0;}}
for(int j=0;j<b-1;j++)
printf("%d ",ss[j]);
printf("%d",ss[b-1]);
return 0;}