#include <stdio.h>
int main(){
	double sum=0,x;
	for(int i=0;i<5;i++){
		scanf("%lf",&x);
		sum+=x;
	}
	printf("%.1lf",sum/5);
	return 0;
}
