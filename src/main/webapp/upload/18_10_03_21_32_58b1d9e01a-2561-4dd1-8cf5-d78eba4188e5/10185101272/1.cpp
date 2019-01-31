#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	double d,p,r;
	scanf("%lf%lf%lf",&d,&p,&r);
	r*=0.01;
	printf("%.0lf",log(p/(p-d*r))/log(1+r));
	return 0;
}