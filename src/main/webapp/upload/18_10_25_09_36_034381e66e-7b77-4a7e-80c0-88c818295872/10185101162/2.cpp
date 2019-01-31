#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register int sgn(1);
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
#define ri readint()

int main() {
	return !printf("%.1lf", (ri + ri + ri + ri + ri) / 5.0);
}
