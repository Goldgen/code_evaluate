#include <cstdio>
using namespace std;

int main() {
	double sum = 0;
	double p;
	double n;
	scanf("%lf", &n);
	p = 1.0 / n;
	printf("%.2lf", p);
	sum += p;
	int cnt = 5;
	while(--cnt) {
		scanf("%lf", &n);
		p = 1.0 / n;
		printf(" %.2lf", p);
		sum += p;
	}
	return !printf("\n%.6lf\n", sum);
}