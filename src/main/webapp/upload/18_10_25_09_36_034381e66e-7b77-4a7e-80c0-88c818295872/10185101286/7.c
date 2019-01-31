#include<stdio.h>
int main()
{
	int n,i,j,k,l,m,a;
	while((scanf("%d",&n))!=EOF){
	i=n/2;
	for(j=1;j<=i;++j){
		printf(" ");
	}
	printf("*\n");
	for(k=1;k<i;++k){
		for(l=1;l<=i-k;++l){
			printf(" ");
		}
		printf("*");
		for(m=1;m<=(2*k-1);++m){
			printf(" ");
		}
		printf("*\n");
	}
	for(a=1;a<=n;++a){
		printf("*");
	}
	}
}
