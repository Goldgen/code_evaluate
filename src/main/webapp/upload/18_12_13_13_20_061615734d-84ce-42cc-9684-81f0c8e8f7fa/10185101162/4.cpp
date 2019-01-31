#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for(register int i(0);i < n;++i) {
		char s[60];
		scanf("%s", s);
		int sz = strlen(s);
		for(register int j(0);j < sz;++j) {
			++s[j];
			if(!isalpha(s[j])) {
				s[j] = 'A';
			}
		}
		printf("case #%d: %s\n", i, s);
	}
	
	return 0;
}