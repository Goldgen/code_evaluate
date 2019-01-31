#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%.8lf %.8lf %.3lf", a, b, sqrt(abs(a - b)));

	return 0;
}
