#include <stdio.h>
int main(){
	double x,mmax=-10000000,mmin=1000000000;
	while(scanf("%lf",&x)){
		if(x<0) break;
		if(x>mmax)
			mmax=x;
		if(x<mmin)
			mmin=x;
	}
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",mmax,mmin);
	return 0;
}
