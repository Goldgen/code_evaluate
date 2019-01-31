#include<stdio.h>
#define Pi 0.89
#define Fi 1.09
#define Ce 2.26
#define Ma 4.50
#define Oa 3.10
int main()
{
	char n;
	double a,b,c,d;
	double s;
    while(n!='T')
    {
        scanf("%c %lf %lf %lf %lf",&n,&a,&b,&c,&d);
	    s=a*b*c*d/12;
	    switch(n){
		case 'P':
			printf("%lf %lf %lf %lf Pine,Cost: $%2ld",a,b,c,d,s*Pi);
			break;
		case 'F':
			printf("%lf %lf %lf %lf Fire,Cost: $%2ld",a,b,c,d,s*Fi);
			break;
		case 'C':
			printf("%lf %lf %lf %lf Cedar,Cost: $%2ld",a,b,c,d,s*Ce);
			break;
		case 'M':
			printf("%lf %lf %lf %lf Maple,Cost: $%2ld",a,b,c,d,s*Ma);
			break;
		case 'O':
			printf("%lf %lf %lf %lf Oak,Cost: $%2ld",a,b,c,d,s*Oa);
			break;}
	}
}
