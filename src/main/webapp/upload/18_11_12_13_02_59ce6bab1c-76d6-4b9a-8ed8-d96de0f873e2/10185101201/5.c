#include<stdio.h>
double g(char a,int b,int c,int d,int e) {
	double i,j;
	switch(a) {
		case 'P':
			i=0.89;
			break;
		case 'F':
			i=1.09;
			break;
		case 'C':
			i=2.26;
			break;
		case 'M':
			i=4.50;
			break;
		case 'O':
			i=3.10;
			break;
		default:
			break;
	}
	j=b*c*d*e*i/12;
	return j;
}
int main() {
	int b,c,d,e;
	double s=0.0,j;
	char a;
	scanf("%c",&a);
	while(a!='T') {
	scanf("%d %d %d %d",&b,&c,&d,&e);
		printf("%d %d*%d*%d ",b,c,d,e);
		switch(a) {
			case 'P':
				printf("Pine, ");
				break;
			case 'F':
				printf("Fire, ");
				break;
			case 'C':
				printf("Cedar, ");
				break;
			case 'M':
				printf("Maple, ");
				break;
			case 'O':
				printf("Oak, ");
				break;
			default:
				break;
		}
		j=g(a,b,c,d,e);
		printf("Cost: $%.2lf",j);
		printf("\n");
		s=s+j;
		scanf(" %c",&a);
	}
	printf("Total cost: $%.2lf",s);
}