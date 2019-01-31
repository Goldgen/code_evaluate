#include <cstdio>
#include <cctype>
using namespace std;

inline
	int max(int a, int b) {
	return (a > b) ? (a) : (b);
}

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register int sgn(1);
	register char c;
	c = gc;
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
#define ri readint()

int main() {
	printf("%d", max(max(ri, ri), ri));
	
	return 0;
}