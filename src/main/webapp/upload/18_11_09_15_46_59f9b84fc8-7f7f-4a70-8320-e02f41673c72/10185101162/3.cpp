#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	do {
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

char c = 0x40;

int n;

void solve1() {
	for(register int i(1);i < n;++i) {
		++c;
		for(register int j(0);j < n - i;++j) {
			putchar(' ');
		}
		for(register int j(0);j < ((i << 1) - 1);++j) {
			putchar(c);
		}
		putchar('\n');
	}
}

void solve2() {
	for(register int i(1);i < n;++i) {
		putchar('\n');
		++c;
		for(register int j(0);j < i;++j) {
			putchar(' ');
		}
		for(register int j(0);j < (((n - i) << 1) - 1);++j) {
			putchar(c);
		}
	}
}

int main() {
	n = ri;
	solve1();
	++c;
	for(register int j(0);j < ((n << 1) - 1);++j) {
		putchar(c);
	}
	solve2();
	
	return 0;
}