#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c(gc);
	while(!isdigit(c)) {
		c = gc;
	}
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int main() {
	int n = ri;
	int m = n / 2;
	for(register int j(0);j < m;++j) {
		putchar(' ');
	}
	putchar('*'); putchar('\n');
	for(register int i(1);i < m;++i) {
		for(register int j(0);j < m - i;++j) {
			putchar(' ');
		}
		putchar('*');
		for(register int j(0);j < (i << 1) - 1;++j) {
			putchar(' ');
		}
		putchar('*'); putchar('\n');
	}
	for(register int i(0);i < n;++i) {
		putchar('*');
	}

	return 0;
}
