#include <cstdio>
#include <cctype>
using namespace std;

void dec_to_bin(long long n) {
	if(!n) return;
	dec_to_bin(n >> 1LL);
	putchar((n & 1) ^ 0x30);
}

#define gc getchar()
inline
	long long readint() {
	register long long ret(0);
	register char c;
	do {
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (long long)(c ^ 0x30);
	} while(isdigit(c = gc));
	return ret;
}
#define ri readint()

int main() {
	long long n = ri;
	if(!n) return !putchar('0');
	dec_to_bin(n);
	
	return 0;
}