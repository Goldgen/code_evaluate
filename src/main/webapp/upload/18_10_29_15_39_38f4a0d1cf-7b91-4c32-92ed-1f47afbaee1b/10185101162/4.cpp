#include <cstdio>
using namespace std;

double maxs(0), mins(2147483647.0);

int main() {
	double s;
	while(~scanf("%lf", &s) && s >= 0) {
		if(maxs < s) {
			maxs = s;
		}
		if(mins > s) {
			mins = s;
		}
	}
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf", maxs, mins);
	
	return 0;
}