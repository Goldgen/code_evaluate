#include <cstdio>
#include <cctype>
using namespace std;

int gcd(const int g_a, const int g_b) {
	int a = g_a;
	int b = g_b;
	while(b) {
		int m = b;
		b = a % b;
		a = m;
	}
	return a;
}

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	do {
		c = gc;
	} while(isspace(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
	} while(isdigit(c = gc));
	return ret;
}
#define ri readint()

int main() {
	int a = ri, b = ri;
	return !printf("%d\n", gcd(a, b));
}