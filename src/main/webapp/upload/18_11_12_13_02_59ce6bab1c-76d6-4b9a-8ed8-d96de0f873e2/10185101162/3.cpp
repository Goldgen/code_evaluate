#include <cstdio>
#include <cctype>
#include <cmath>
using namespace std;

bool isprime(int n) {
	if(n < 2) return false;
	const int BASE = (int)(sqrt(n) + 1.1);
	for(register int i(2);i < BASE;++i) if(!(n % i)) {
		return false;
	}
	return true;
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
	if(isprime(ri)) {
		printf("It is a prime number.");
	} else { 
		printf("It's not a prime number.");
	} 
	
	return 0;
}