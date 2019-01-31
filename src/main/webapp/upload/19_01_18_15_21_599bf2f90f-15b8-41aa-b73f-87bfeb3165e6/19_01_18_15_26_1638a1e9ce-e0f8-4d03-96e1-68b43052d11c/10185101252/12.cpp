#include <stdio.h>

double a, b;
char c;

int main(){
	
	scanf("%lf%c%lf", &a, &c, &b);
	switch(c){
		case '+':
			printf("%.3lf", a+b);
			break;
		case '-':
			printf("%.3lf", a-b);
			break;
		case '*':
			printf("%.3lf", a*b);
			break;
		case '/':
			printf("%.3lf", a/b);
			break;
		default:
			break;
	}
	
	
	return 0;
}