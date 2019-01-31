#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

bool prime[1005];

void sieve() {
	memset(prime, 1, sizeof(prime));
	prime[0] = prime[1] = false;
	register int i, j;
	for(i = 2;i <= 32;++i) if(prime[i]) for(j = i * i;j <= 1000;j += i) { 
		prime[j] = false; 
	}
}

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

int main() {
	sieve();
	int n;
	printf("%d", n = ri);
	const int BASE = n / 2;
	for(register int i(3);i <= BASE;++i) if(prime[i] && prime[n - i]) {
		printf("=%d+%d", i, n - i);
	}
	
	return 0;
}