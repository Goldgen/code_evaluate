#include <stdio.h>
int main()
{int n,a,b;
scanf("%d",&n);
int ff[n];
int ss[n+1];
for(int i=0;i<n;i++)
scanf("%d",&ff[i]);
scanf("%d %d",&a,&b);
ss[a]=b;
for(int j=0;j<a;j++)
ss[j]=ff[j];
for(int k=a+1;k<=n;k++)
ss[k]=ff[k-1];
printf("%d",ss[0]);
for(int i=1;i<=n;i++)
printf("% d",ss[i]);
return 0;
}