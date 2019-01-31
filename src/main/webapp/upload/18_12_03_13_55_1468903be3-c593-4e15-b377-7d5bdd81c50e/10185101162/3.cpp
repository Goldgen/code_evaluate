#include <cstdio>
#include <cstring>
using namespace std;

char s[2][80];

int main() {
	scanf("%s%s", s[0], s[1]);
	unsigned int sz0 = strlen(s[0]);
	unsigned int sz1 = strlen(s[1]);
	if(sz0 < sz1) {
		for(register int i(0);i < sz0;++i) {
			putchar(s[0][i]);
			putchar(s[1][i]);
		}
		return !printf("%s\n", s[1] + sz0);
	}
	for(register int i(0);i < sz1;++i) {
			putchar(s[0][i]);
			putchar(s[1][i]);
		}
	return !printf("%s\n", s[0] + sz1);
}