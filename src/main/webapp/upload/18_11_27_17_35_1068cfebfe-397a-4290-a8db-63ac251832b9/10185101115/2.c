#include <stdio.h>
#include <math.h>

int main()
{double data[100];
double c=0.0;
for(int i=1;i<101;i++){
	int j=2*i*(2*i+1)*(2*i+2);
	data[i-1]=1.0/j;
}
for(int k=0;k<100;k++){
	c+=pow(-1,k)*data[k]; 
} 
printf("%.4f",c*4.0+3.0);
}