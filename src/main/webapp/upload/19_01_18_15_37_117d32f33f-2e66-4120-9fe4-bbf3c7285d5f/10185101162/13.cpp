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

const char* s[12] = {
	"December",
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
};

const char* ss[32] = {
	"Er",
	"st", "nd", "rd", "th", "th", "th", "th", "th", "th", "th",
	"th", "th", "th", "th", "th", "th", "th", "th", "th", "th",
	"st", "nd", "rd", "th", "th", "th", "th", "th", "th", "th",
	"st"
};

int m, d;

int main() {
	m = ri % 12; d = ri;
	printf("%d%s %s %d", d, ss[d], s[m], ri);
	
	return 0;
}