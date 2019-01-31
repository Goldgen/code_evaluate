#include <cstdio>
#include <cctype>
using namespace std;

const char s[] = " 22233344455566677778889999";

#define gc getchar()
int main() {
	char c;
	while(isalpha(c = gc)) {
		if(isupper(c)) {
			putchar(s[c ^ 0x40]);
		} else {
			putchar(s[c ^ 0x60]);
		}
	}
	putchar('\n');
}