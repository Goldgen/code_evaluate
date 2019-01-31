#include<stdio.h>
int main()
{
	unsigned int n,m;
	int a[15],i;
	scanf("%u %u",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(m){
		printf("%d",a[n-m]);
		for(i=n-m+1;i<n;i++){
			printf(" %d",a[i]);
		}
		for(i=0;i<n-m;i++){
			printf(" %d",a[i]);
		}
	}
	else
	{
		printf("%d",a[0]);
		for(i=1;i<n;i++){
			printf(" %d",a[i]);
		}
	}
}