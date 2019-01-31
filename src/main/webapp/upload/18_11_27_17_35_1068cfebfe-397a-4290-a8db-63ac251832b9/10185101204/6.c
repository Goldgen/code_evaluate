#include <stdio.h>
int main()
{int n,a,b;
scanf("%d",&n);
int ff[n],ss[n-1];
for(int i=0;i<n;i++)
scanf("%d",&ff[i]);
scanf("%d",&a);
for(int i=0;i<n;i++)
{if(ff[i]==a)
{b=i;break;}
else if(i==n-1)
{printf("ERROR");
return 0;}}
for(int i=0;i<b;i++)
ss[i]=ff[i];
for(int j=b;j<n-1;j++)
ss[j]=ff[j+1];
printf("%d",ss[0]);
for(int k=1;k<n-1;k++)
printf(" %d",ss[k]);
return 0;}
