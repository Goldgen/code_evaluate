#include <cstdio>
#include <cstring>
using namespace std;

void i2a_solve(char *c, unsigned long long i) {
	if(!i) {
		c[0] = '\0';
		return;
	}
	c[0] = ((i % 10) ^ 0x30);
	i2a_solve(c + 1, i / 10);
}

char* i2a(unsigned long long i) {
	char* c;
	c = new char[20];
	i2a_solve(c, i);
	int sz = strlen(c);
	for(register int j(0);j < (sz >> 1);++j) {
		c[j] ^= c[sz - j - 1] ^= c[j] ^= c[sz - j - 1];
	}
	return c;
}

int main() {
	unsigned long long i;
	scanf("%llu", &i);
	return !printf("%s\n", i2a(i));
}