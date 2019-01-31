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

const int m_days[] = {
	0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int y1, y2, m1, m2, d1, d2;

#define is_leap(x) (!((x) % 4) && (((x) % 100) || !((x) % 400)))

long long init() {
	long long _ret(0LL);
	for(register int i(y1);i < y2;++i) {
		if is_leap(i) {
			_ret += 366;
		}
		else {
			_ret += 365;
		}
	}
	return _ret;
}

long long _solve(int y, int m, int d) {
	long long _ret(0);
	for(register int i(1);i < m;++i) {
		_ret += m_days[i];
	}
	if(m > 2 && is_leap(y)) {
		++_ret;
	}
	_ret += d;
	return _ret;
}

long long solve() {
	long long _ret(init());
	
	_ret += _solve(y2, m2, d2) - _solve(y1, m1, d1);
	
	return _ret;
}

int main() {
	y1 = ri; m1 = ri; d1 = ri;
	y2 = ri; m2 = ri; d2 = ri;
	printf("采集时间为%lld天", solve());
	
	return 0;
}