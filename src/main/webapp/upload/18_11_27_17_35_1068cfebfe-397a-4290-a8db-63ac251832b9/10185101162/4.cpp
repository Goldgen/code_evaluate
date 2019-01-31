#include <cstdio>
using namespace std;

int main() {
	double s = 2.0;
	for(register int i(0);i <= 10;++i) {
		printf("%.4lf %.4lf %.4lf %.4lf %.4lf\n", s, 1.0 / s, s * s, s * s * s, s * s * s * s);
		s += 0.1;
	}
	
	return 0;
}