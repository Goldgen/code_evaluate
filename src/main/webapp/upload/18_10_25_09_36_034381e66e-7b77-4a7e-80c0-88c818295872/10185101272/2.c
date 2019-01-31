#include<stdio.h>
int main(){
	int i;
	double sum=0,a;
	for(i=0;i<5;i++){
		scanf("%lf",&a);
		sum+=a;}
	printf("%.1lf",sum/5);
	return 0;
}
	