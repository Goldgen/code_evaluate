#include <cstdio>
#include <cctype>
using namespace std;

int a[52][52];

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register int sgn(1);
	register char c;
	do {
		c = gc;
	} while(isspace(c));
	if(c == '-') {
		sgn = -1;
		c = gc;
	}
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret * sgn;
}
#define ri readint()

int main() {
	int n, m;
	n = ri; m = ri;
	for(register int i(0);i < n;++i) {
		for(register int j(0);j < m;++j) {
			a[i][j] = ri;
		}
	}
	for(register int i(0);i < m;++i) {
		for(register int j(0);j < n - 1;++j) {
			printf("%d ", a[j][i]);
		}
		printf("%d\n", a[n - 1][i]);
	}
	
	return 0;
}