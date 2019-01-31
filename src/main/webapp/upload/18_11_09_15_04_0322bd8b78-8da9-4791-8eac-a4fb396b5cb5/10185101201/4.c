#include <stdio.h>
main()
{
	int n,i;
	long long b,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    b=s%20181111;
    printf("%lld",b);
}