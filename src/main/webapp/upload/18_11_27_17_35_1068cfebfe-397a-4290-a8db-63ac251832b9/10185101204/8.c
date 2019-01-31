#include <stdio.h>
int main()
{int n,a=1,b=1;
scanf("%d",&n);
int ff[n];
for(int i=0;i<n;i++)
scanf("%d",&ff[i]);
for(int j=0;j<n-1;j++)
{if(ff[j]==ff[j+1])
{b++;
a=a>b?a:b;}
else
b=1;}
printf("%d",a);
return 0;}