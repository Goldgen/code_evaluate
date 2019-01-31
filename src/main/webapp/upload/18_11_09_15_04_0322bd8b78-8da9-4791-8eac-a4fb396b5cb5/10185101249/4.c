#include <stdio.h>
int main()
{
    long long a,n,s;
    s=1;
    scanf("%lld",&n);
    if(0<=n&&n<=100)
    {
	for(a=1;a<=n;a++)
    {
    	s*=a;
	}
	printf("%lld",s%20181111);
	}
    return 0;
}
