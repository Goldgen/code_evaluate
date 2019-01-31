#include<stdio.h>
int main(){
	int i=1,sum=1;
	double e=1;
	while(1.0/sum>=1e-6){
		e+=1.0/sum;
		i++;
		sum*=i;
	}
	printf("%.6lf",e);
	//ans=2.718282;
	return 0;
} 