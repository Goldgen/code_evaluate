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

int sum(0);

int main() {
	for(register int i(0);i < 8;++i) {
		sum += ri;
	}
	printf("%d\n", sum);
	sum = 0;
	for(register int i(0);i < 8;++i) {
		sum += ri;
	}
	printf("%d", sum);
	
	return 0;
}