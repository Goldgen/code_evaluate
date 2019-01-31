#include <stdio.h>
main()
{
	int n,i=1;
	long long N=1;
	scanf("%d",&n);

	for(;i<=n;i++)
    {
        N=N*i;
    }
    printf("%lld",N);
}