#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	do{
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int main() {
	int n = ri;
	for(register int i(0);i < n;++i) {
		for(register int j(0);j < (((n - i) << 1) - 2);++j) {
			putchar(' ');
		}
		putchar('1');
		for(register int j(0);j < i;++j) {
			putchar('+');
			putchar(0x30 ^ (j + 2));
		}
		putchar('=');
		putchar(0x30 ^ (i + 1));
		for(register int j(0);j < i;++j) {
			putchar('+');
			putchar(0x30 ^ (i - j));
		}
		if(i != n - 1) putchar('\n');
	}

	return 0;
}
