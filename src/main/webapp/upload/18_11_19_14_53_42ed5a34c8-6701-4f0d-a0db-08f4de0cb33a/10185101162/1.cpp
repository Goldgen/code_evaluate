#include <cstdio>
#include <cmath>
using namespace std;

float RunningAvg(float x) {
	static long long cnt(0);
	static float val(0.0);
	++cnt;
	val += x;
	return val / (float)cnt;
}

int main() {
	float n;
	while(~scanf("%f", &n) && abs(n + 1) > 1e-05) {
		printf("%.2f\n", RunningAvg(n));
	}
	
	return 0;
}