#include<stdio.h>
#include<stdlib.h>
int main(){
	char x;
	double a,b;
	scanf("%lf%c%lf",&a,&x,&b);
	switch(x){
		case '+':printf("%.3lf",a+b);break;
		case '-':printf("%.3lf",a-b);break;
		case '*':printf("%.3lf",a*b);break;
		case '/':printf("%.3lf",a/b);break;
		default :return 0;
	}
		
	
	
	return 0;
} 