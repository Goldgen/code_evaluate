#include <stdio.h>

long long x, p, n;
long long int result = 0;
int main() {
	
	scanf("%lld%lld%lld", &x, &p, &n);
	for(int i = 0; i < n; i++){
		result = (result << 1) + (1 & (x >> p - i));
	}
	printf("%lld", result);
	
	
}