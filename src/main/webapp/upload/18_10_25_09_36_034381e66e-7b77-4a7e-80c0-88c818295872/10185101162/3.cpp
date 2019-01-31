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

const unsigned long long ans[] = {
	1uLL, 1uLL, 2uLL, 6uLL, 24uLL,
	120uLL, 720uLL, 5040uLL, 40320uLL, 362880uLL,
	3628800uLL, 39916800uLL, 479001600uLL, 6227020800uLL, 87178291200uLL,
	1307674368000uLL, 20922789888000uLL, 355687428096000uLL, 6402373705728000uLL, 121645100408832000uLL
};

int main() {
	int n = ri;
	printf("%llu", ans[n]);

	return 0;
}
