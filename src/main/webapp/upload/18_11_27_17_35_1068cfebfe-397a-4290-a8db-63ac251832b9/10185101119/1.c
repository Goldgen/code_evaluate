#include <stdio.h>
int main(){
	double a[5]={0},b=0.0;
	for(int i=0;i<=4;i++){
		scanf("%lf",&a[i]);
	}
	for(int i=0;i<=4;i++){
		b=b+1.0/a[i];
		if(i<4)
		printf("%.2lf ",1.0/a[i]);
		else
		printf("%.2lf\n",1.0/a[i]);
	}
	printf("%.6lf",b);
	return 0;
} 