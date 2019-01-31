#include <stdio.h>
#include <math.h>
int main(){
	double data[100]={0.0},sum=0.0;
	for(int i=0;i<=99;i++){
		data[i]=1.0/((2.0*i+2)*(2.0*i+3)*(2.0*i+4));
    }
    for(int i=0;i<=99;i++){
    	sum+=pow(-1,i)*data[i];
	}
	printf("%.4lf",sum*4.0+3.0);
	return 0;
}