#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	double p;
	scanf("%lf", &p);
	printf("$%.2lf", floor((p + 0.001) * 100.0) / 100.0);
	int cnt = 5;
	while(--cnt) {
		scanf("%lf", &p);
		printf(" $%.2lf", floor((p + 0.001) * 100.0) / 100.0);
	}
	
	return 0;
}