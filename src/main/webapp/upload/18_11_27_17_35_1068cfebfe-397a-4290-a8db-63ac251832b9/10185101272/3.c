#include<stdio.h>
int main(){
	double amounts[10]={};
	long dollars[10]={},cents[10]={};
	int i;
	for(i=0;i<5;i++) scanf("%lf",&amounts[i]);
	
	for(i=0;i<5;i++) dollars[i]=amounts[i],cents[i]=(amounts[i]-dollars[i]+1e-5)*100;
	
	for(i=0;i<4;i++) printf("$%ld.%02ld ",dollars[i],cents[i]);
	printf("$%ld.%02ld",dollars[i],cents[i]);
	return 0;
} 