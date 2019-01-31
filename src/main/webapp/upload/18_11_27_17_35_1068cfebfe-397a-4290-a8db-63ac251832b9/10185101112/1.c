#include <stdio.h>

int main(){
	double num[5];
	double daoshu[5],sum=0.0;
	int i=1,j=1,k=0;
	
	scanf("%lf",&num[0]);
	daoshu[0]=1.0/num[0];
	printf("%.2lf ",daoshu[0]);
	for (;i<=4;i++){
		scanf(" %lf",&num[i]);
		daoshu[i]=1.0/num[i];
	}
	for (;j<=3;j++){
		printf("%.2lf ",daoshu[j]);
	}
	printf("%.2lf",daoshu[4]);
	printf("\n");
	for (;k<=4;k++){
		sum=sum+daoshu[k];
	}
	printf("%.6lf",sum);
	return 0;
		
} 