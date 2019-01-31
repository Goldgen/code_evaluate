#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()
inline
	long long readll() {
	register long long ret(0);
	register long long sgn(1);
	register char c(gc);
	while(isspace(c)) {
		c = gc;
	}
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
#define rl readll()

long long x, p, n;

int main() {
	x = rl; p = rl; n = rl;
	x >>= p - n + 1;
	printf("%lld", x & ((1LL << n) - 1LL));
	
	return 0;
}