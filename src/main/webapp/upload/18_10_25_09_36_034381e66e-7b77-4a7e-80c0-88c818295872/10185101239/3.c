#include <stdio.h>
#include <stdlib.h>

int main()
{
int long long i,n,k=1;
scanf("%d",&n);
for(i=2;i<=n;i++)
k*=i;
if (n<20)
printf("%lld",k);
return 0;
}