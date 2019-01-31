#include<stdio.h>
#include<stdlib.h>
int main(){	
	unsigned long long i,sum=1;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
			sum*=i;
		  printf("%llu",sum);
		 
	return 0;}
	
		