#include <stdio.h>
int main(){
	long long i,ans_1=1,ans_2=1;
	for(i=2;i<=10;i++)	
		ans_1*=i;
	for(i=2;i<=20;i++)
		ans_2*=i;
	printf("%lld\n",ans_1);
	printf("%lld",ans_2);
	return 0;
}
