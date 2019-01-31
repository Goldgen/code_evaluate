#include <cstdio>
#include <cstring>
using namespace std;

char s[100];

int main() {
	fgets(s, 100, stdin);
	const int BASE = strlen(s) - 2;
	for(register int i(0);i < BASE / 2;++i) {
		if(s[i] != s[BASE - i]) {
			return !printf("False\n");
		}
	}
	
	return !printf("True\n");
}