#include <stdio.h>

unsigned int x, p, n;
int main() {
	
	scanf("%u%u%u", &x, &p, &n);
	for(int i = 0; i < n; i++){
		x = x ^ (1 << (p-i));
	}
	printf("%u", x);
	
	
}