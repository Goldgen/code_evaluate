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
	} while(isdigit(c = gc));
	return ret;
}
#define ri readint()

int main() {
	unsigned long long a, b, c;
	a = ri; b = ri; c = ri;
	unsigned long long tmp_a = a;
	for(register int i(0);i <= 9;++i) {
		if(c - b == a) {
			return !printf("%d\n", i);
		}
		a *= 10uLL;
	}
	a = tmp_a;
	for(register int i(1);i <= 9;++i) {
		b *= 10uLL;
		if(c - b == a) {
			return !printf("-%d\n", i);
		}
	}
	
	return 0;
}