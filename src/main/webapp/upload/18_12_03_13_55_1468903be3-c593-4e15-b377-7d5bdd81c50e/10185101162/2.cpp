#include <cstdio>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

struct mychar {
	char c[40];
	
	mychar() {
		memset(c, 0, sizeof(c));
	}
};

mychar s[12];

struct cmp{
	bool operator()(const mychar& a, const mychar& b) {
		return strcmp(a.c, b.c) > 0;
	}
};

#define gc getchar()
int main() {
	int n;
	scanf("%d", &n);
	gc;
	for(register int i(0);i < n;++i) {
		fgets(s[i].c, 40, stdin);
	}
	sort(s, s + n, cmp());
	for(register int i(0);i < n;++i) {
		printf("%s", s[i].c);
	}
	return 0;
}