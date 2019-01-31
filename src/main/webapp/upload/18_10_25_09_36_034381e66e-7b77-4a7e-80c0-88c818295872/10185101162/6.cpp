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
	for(register int i(1);i < n;++i) {
		for(register int j(2);j < i;++j) {
			putchar(' ');
		}
		putchar('*'); putchar('\n'); putchar('*');
	}
	for(register int i(1);i < n;++i) {
		putchar('*');
	}

	return 0;
}
