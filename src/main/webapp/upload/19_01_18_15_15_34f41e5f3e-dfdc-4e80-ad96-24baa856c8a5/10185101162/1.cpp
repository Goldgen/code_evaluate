#include <cstdio>
using namespace std;

#define sum(a,b,c) ((a) * 7 + (b) * 5 + (c) / 3)

int main() {
	for(register int i(1);i <= 13;++i) {
		for(register int j(1);j <= 18;++j) {
			for(register int k(3);k < 98;k += 3) {
				if(sum(i, j, k) == 100 && i + j + k == 100) {
					printf("%d %d %d", i, j, k);
					break;
				} else if(sum(i, j, k) > 100 || i + j + k > 100) {
					break;
				}
			}
			if(sum(i, j, 0) > 100) {
				break;
			}
		}
	}
	
	return 0;
}