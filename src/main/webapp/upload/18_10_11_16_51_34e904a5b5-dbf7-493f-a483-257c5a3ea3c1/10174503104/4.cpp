#include <stdio.h>
#include <math.h>
double myabs(double x){
	return x>0?x:-x;
}
int main(){
	double A,B;
	scanf("%lf %lf",&A,&B);
	printf("%.8lf %.8lf ",A,B); 
	printf("%.3lf",sqrt(myabs(A-B)));
	return 0;	
}
