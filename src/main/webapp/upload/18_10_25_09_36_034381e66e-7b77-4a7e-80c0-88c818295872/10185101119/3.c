#include <stdio.h>
int main()
{
    long long jieguo=1;
    int n;
    scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		jieguo=jieguo*n;
		n--;
	}
	printf("%lld",jieguo);
	return 0;
}