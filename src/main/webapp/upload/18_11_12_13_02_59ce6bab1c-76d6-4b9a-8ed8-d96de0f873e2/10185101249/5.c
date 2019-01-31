#include <stdio.h>
double m=0;
double price(int n,int a,int b,int c,int d){
    switch(n){
    case 'P':
        m=0.89*a*b*c*d/12;
        printf("%d %d*%d*%d Pine, Cost: $%.2f\n",a,b,c,d,m);
        break;
    case 'F':
        m=1.09*a*b*c*d/12;
        printf("%d %d*%d*%d Fire, Cost: $%.2f\n",a,b,c,d,m);
        break;
    case 'C':
        m=2.26*a*b*c*d/12;
        printf("%d %d*%d*%d Cedar, Cost: $%.2f\n",a,b,c,d,m);
        break;
    case 'M':
        m=4.50*a*b*c*d/12;
        printf("%d %d*%d*%d Maple, Cost: $%.2f\n",a,b,c,d,m);
        break;
    case 'O':
        m=3.10*a*b*c*d/12;
        printf("%d %d*%d*%d Oak, Cost: $%.2f\n",a,b,c,d,m);
        break;
	default:
		break;
    }
}
int main()
{
    int a,b,c,d;
    double s=0;
    char n;
    while(scanf("%c",&n)&&n!='T'){
    scanf(" %d %d %d %d\n",&a,&b,&c,&d);
	price(n,a,b,c,d);
	s+=m;
	}
	printf("Total cost: $%.2f",s);
return 0;
}