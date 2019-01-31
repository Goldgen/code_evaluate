#include <cstdio>
using namespace std;

int main() {
	double sum = 0;
	for(register int i(2);i <= 200;i += 2) {
		bool sgn = (i & 2);
		if(sgn) {
			sum += 1.0 / (i * (i + 1) * (i + 2));
		} else {
			sum -= 1.0 / (i * (i + 1) * (i + 2));
		}
	}
	sum *= 4.0;
	sum += 3.0;
	printf("%.4lf\n", sum);
	
	return 0;
}