#include<stdio.h>
#include<string.h>

int main(){
	double a,ans,sum;
	int f=0;
	while(~scanf("%lf",&a)){
		if(f) printf(" ");
		ans=1/a;
		sum+=ans;
		printf("%.2lf",ans);
		f=1;
	}
	printf("\n%.6lf",sum);
	return 0;
} 