#include<stdio.h>
double g(char p,int a,int b,int n,int h) {
    double price,total;
    switch(p)
    {case 'P':price=0.89;break;
    case 'F':price=1.09;break;
    case 'C':price=2.26;break;
    case 'M':price=4.50;break;
    case 'O':price=3.10;break;
    default:break;
    }
    total=price*a*b*h*n/12;
	return total;
}
int main() {
	int b,c,d,e;
	double s=0.0,total;
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
			default:
				printf("Oak, ");
				break;
		}
		total=g(a,b,c,d,e);
		printf("Cost: $%.2lf",total);
		printf("\n");
		s=s+total;
		scanf(" %c",&a);
	}
	printf("Total cost: $%.2lf",s);
}
