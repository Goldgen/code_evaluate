#include <stdio.h>

int a, b, c, d, e, f, g, h;

int main(){
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &d, &e, &f);
	scanf("%d %d", &g, &h);
	printf("%d\n", a+b+c+d+e+f+g+h);	

	scanf("%d,%d,%d", &a, &b, &c);
	scanf("%d,%d,%d", &d, &e, &f);
	scanf("%d,%d", &g, &h);
	printf("%d", a+b+c+d+e+f+g+h);	

	return 0;
}