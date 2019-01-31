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
	}while(!isdigit(c));
	do {
		ret = (ret << 3) + (ret << 1) + (c ^ 0x30);
		c = gc;
	} while(isdigit(c));
	return ret;
}
#define ri readint()

int main() {
	int n = ri;
	int *a;
	a = new int[n];
	for(register int i(0);i < n;++i) {
		a[i] = ri;
	}
	int b = ri;
	int r = -1;
	for(register int i(0);i < n;++i) if(a[i] == b) {
		r = i;
		break;
	}
	if(~r) {
		if(r) {
			printf("%d", a[0]);
			for(register int i(1);i < r;++i) {
				printf(" %d", a[i]);
			}
		} else {
			printf("%d", a[++r]);
		}
		for(register int i(r + 1);i < n;++i) {
			printf(" %d", a[i]);
		}
		putchar('\n');
	} else {
		printf("ERROR\n");
	}
	
	return 0;
}