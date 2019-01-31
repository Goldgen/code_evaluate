#include <stdio.h>
int main()
{
	int n;
	long long a=1LL;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a*=i;
		while(a>20181111)
		    a=a-20181111;	
	}
    printf("%d",a%20181111);
	return 0;
} 