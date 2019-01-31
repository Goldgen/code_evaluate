#include <cstdio>
#include <cmath>
using namespace std;

double p, d, r;

int main() {
	scanf("%lf%lf%lf", &d, &p, &r);
	r /= 100.0;
	return !printf("%.0lf", log(p/(p-d*r))/log(1.0+r));
}