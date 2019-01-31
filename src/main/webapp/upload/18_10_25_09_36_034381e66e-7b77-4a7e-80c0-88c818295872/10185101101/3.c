#include <stdio.h>
int main(){
	int i,n=0;
	long long sum = 0;
	scanf("%d",&n);
	sum=1;
	for(i=1;i<=n;++i)
		sum*=i;
	printf("%lld",sum);
	return 0;
}