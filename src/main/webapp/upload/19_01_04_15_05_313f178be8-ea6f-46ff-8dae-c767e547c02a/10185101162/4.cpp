#include <cstdio>
#include <cctype>
#include <cstring>

int cnt[255];
bool rank[255];
int list[120];
int c(-1);
char s[120];

int main() {
	fgets(s, 120, stdin);
	int sz = strlen(s);
	for(register int i(0);i < sz;++i) if(!isspace(s[i])) {
		++cnt[s[i]];
		if(!rank[s[i]]) {
			rank[s[i]] = true;
			list[++c] = s[i];
		}
	}
	for(register int i(0);i <= c;++i) {
		printf("%c %d; ", list[i], cnt[list[i]]);
	}
	
	
	return 0;
}