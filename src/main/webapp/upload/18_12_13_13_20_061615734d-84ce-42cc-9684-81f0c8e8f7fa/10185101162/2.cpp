#include <cstdio>
using namespace std;

char* strmcpy(char* t, const char* s, int m) {
	for(register int i(0);;++i) {
		t[i] = s[m + i];
		if(!s[m + i]) break;
	}
	return t;
}

int main() {
	char t[100], s[100];
	int m;
	fgets(s, 90, stdin);
	scanf("%d", &m);
	printf("%s", strmcpy(t, s, m));
	
	return 0;
}