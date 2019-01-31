#include <cstdio>
#include <cctype>
using namespace std;

const char* year_type[] = {"不是闰年", "闰年"};

const char* month_type[] = {"春季", "夏季", "秋季", "冬季"};

const int m_days[] = {
	29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

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

int getmonth(int m) {
	switch(m) {
		case 3: case 4: case 5: return 0;
		case 6: case 7: case 8: return 1;
		case 9: case 10: case 11: return 2;
		default: return 3;
	}
}

int main() {
	int y, m;
	y = ri; m = ri;
	int yt;
	if(y % 4 || (!(y % 100) && y % 400)) {
		yt = 0;
	} else {
		yt = 1;
	}
	if(m == 2 && yt) {
		printf("%s %s %d", year_type[yt], month_type[getmonth(m)], m_days[0]);
	} else {
		printf("%s %s %d", year_type[yt], month_type[getmonth(m)], m_days[m]);
	}
	
	return 0;
}