#include <cstdio>
#include <cstring>
using namespace std;

char s[1024];
char d[1024];

int main() {
	while(~scanf("%s", s) && s[0] != '#') {
		scanf("%s", d);
		int szs = strlen(s);
		int szd = strlen(d);
		int cnt(0);
		for(register int i(0);i <= szs - szd;++i) {
			register int j(0);
			for(;j < szd;++j) if(s[i + j] != d[j]) {
				break;
			}
			if(j == szd) {
				i += szd - 1;
				++cnt;
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}