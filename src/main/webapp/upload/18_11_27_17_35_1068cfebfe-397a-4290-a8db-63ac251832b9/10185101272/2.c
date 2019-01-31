#include<stdio.h>
int main(){
	double data[105]={},sum=0;
	int i,j;
	for(i=2,j=0;i<=200;i+=2,j++)
		data[j]=1.0/(i*(i+1)*(i+2));
	for(i=0;i<100;i+=2)
		sum+=data[i]-data[i+1];
	printf("%.4lf",sum*4.0+3.0);
	return 0;
} 