#include<stdio.h>
int main()
{
	unsigned long long b,i,c;
	b=1;
 scanf("%u",&c);

		
	for(i=1;i<=c;i++){
	
		b*=i;
	}
	
	printf("%llu",b);
	return 0;

 } 