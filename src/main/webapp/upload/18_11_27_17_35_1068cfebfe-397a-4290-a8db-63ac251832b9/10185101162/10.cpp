#include <cstdio>
#include <cctype>
using namespace std;

unsigned int rand(unsigned int BASE) {
	static unsigned long long a = 19260817;
	return (unsigned int)((a * 20188102uLL + 54321uLL) % BASE);
}

template <typename T>
T* make_axle(T* begp, T* endp) {
	T* randp = begp + (rand(endp - begp));
	T frog = *randp;
	*randp = *begp;
	while(true) {
		while(begp < endp) if(frog >= *(--endp)) {
			break;
		}
		if(begp < endp) {
			*begp = *endp;
		} else {
			*begp = frog;
			return begp;
		}
		while(begp < endp) if(*(++begp) >= frog) {
			break;
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
void qsort(T* begp, T* endp) {
	if(endp - begp < 2) return;
	T* ax = make_axle(begp, endp);
	qsort(begp, ax);
	qsort(ax + 1, endp);
}

#define gc getchar()
inline
	int readint() {
	register int ret(0);
	register char c;
	do{
		c = gc;
	} while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int main() {
	int* a;
	int n = ri;
	a = new int[n];
	for(register int i(0);i < n;++i) {
		a[i] = ri;
	}
	qsort(a, a + n);
	printf("%d", a[0]);
	for(register int i(1);i < n;++i) {
		printf(" %d", a[i]);
	}
	
	return !putchar('\n');
}