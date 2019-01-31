#include <cstdio>
#include <cctype>
#include <cstdlib>
using namespace std;

template <typename T>
T* make_axle(T* begp, T* endp) {
	T* randp = begp + (rand() % (endp - begp));
	T frog = *randp;
	*randp = *begp;
	while(true) {
		--endp;
		while(frog < *endp) {
			--endp;
		}
		if(begp < endp) {
			*begp = *endp;
		} else {
			*begp = frog;
			return begp;
		}
		++begp;
		while(begp < endp && *begp < frog) {
			++begp;
		}
		if(begp < endp) {
			*endp = *begp;
		} else {
			*endp = frog;
			return endp;
		}
	}
}

template <typename T>
T qselect(T* begp, T* endp, int kth) {
	if(kth == endp - begp) return *endp;
	T* ax = make_axle(begp, endp);
	if(kth > ax - begp) {
		return qselect(ax + 1, endp, kth - (ax - begp) - 1);
	}
	return qselect(begp, ax, kth);
}

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

int main() {
	int a[3];
	a[0] = ri; a[1] = ri; a[2] = ri;
	printf("%d", qselect(a, a + 3, 1));
	
	return 0;
}