#include <cstdio>
#include <cctype>
using namespace std;

typedef unsigned long long Ull;

Ull fib(int r, Ull& pp) {
	Ull& p = pp;
	if(!r) {
		p = 1;
		return 0;
	}
	Ull d;
	p = fib(r - 1, d);
	return p + d;
}

Ull Fibonacci(int r) {
	Ull d;
	return fib(r, d);
}

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
	} while(isdigit(c = gc));
	return ret;
}
#define ri readint()

int main() {
	printf("%llu", Fibonacci(ri));

	return 0;
}