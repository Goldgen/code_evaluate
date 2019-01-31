#include <stdio.h>
const double P=0.89,F=1.09,C=2.26,M=4.50,O=3.10;
const int time =12;
double cost(double t);
int main() {
	char ch;
	double sum=0;
	scanf("%c",&ch);
	do {
		double t=0;
		int a=ch;
		switch(a) {
			case 'P':
				t=P;
				break;
			case 'F':
				t=F;
				break;
			case 'C':
				t=C;
				break;
			case 'M':
				t=M;
				break;
			case 'O':
				t=O;
				break;
			default :
				break;
		}
		if(t!=0)
		sum += cost(t);
		scanf(" %c", &ch);
	} while(ch != 'T');
	printf("Total cost: $%.2f",sum);
}
double cost(double t) {
	double n,a,b,c,y;
	scanf(" %lf %lf %lf %lf",&n,&a,&b,&c);
	printf("%.0f %.0f*%.0f*%.0f ",n,a,b,c);
	y=t*a*b*c*n/time;
	if(t==P)
		printf("Pine");
	if(t==F)
		printf("Fire");
	if(t==C)
		printf("Cedar");
	if(t==M)
		printf("Maple");
	if(t==O)
		printf("Oak");
	printf(", Cost: $%.2f\n",y);
	return y;
}
