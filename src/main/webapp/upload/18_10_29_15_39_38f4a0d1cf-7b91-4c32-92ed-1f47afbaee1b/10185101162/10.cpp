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

int lowbit(int x) {
	return x & -x;
}

void ppp2(int i) {
	switch(lowbit(i)) {
		case 32:putchar('5');break;
		case 64:putchar('6');break;
		case 128:putchar('7');break;
		case 256:putchar('8');break;
		default:putchar('9');break;
	}
}

void ppp(int i) {
	switch(lowbit(i)) {
		case 1:putchar('0');break;
		case 2:putchar('1');break;
		case 4:putchar('2');break;
		case 8:putchar('3');break;
		case 16:putchar('4');break;
		default:ppp2(i);break;
	}
}

int main() {
	int n = ri;
	int _max = (1 << n) - 1;
	printf("{}\n");	//空集
	for(register int i(1);i < _max;++i) {
		putchar('{');
		ppp(i);
		int tmp = i - lowbit(i);
		for(register int j(0);j < n;++j) {
			int t = tmp & (1 << j);
			if(t) printf(",%d", j);
		}
		printf("}\n");
	}
	printf("{0");
	for(register int i(1);i < n;++i) {
		printf(",%d", i);
	}
	putchar('}');
	
	return 0;
}