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

#define max(a,b) ((a > b) ? (a) : (b))

int main() {
	int n = ri;
	int p, v;
	int cnt(1), c(1);
	p = ri;
	for(register int i(1);i < n;++i) {
		v = ri;
		if(v == p) {
			++c;
		} else {
			cnt = max(cnt, c);
			c = 1;
			p = v;
		}
	}
	cnt = max(cnt, c);
	
	return !printf("%d\n", cnt);
}