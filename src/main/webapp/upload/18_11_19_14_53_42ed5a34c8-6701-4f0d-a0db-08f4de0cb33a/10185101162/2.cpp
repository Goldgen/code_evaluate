#include <cstdio>
#include <cstring>
using namespace std;

int add(const char* s, int sz) {
	if(!sz) return 0;
	return (s[0] ^ 0x30) + add(s + 1, sz - 1);
}

int main() {
	char s[100];
	scanf("%s", s);
	printf("%d\n", add(s, strlen(s)));
	
	return 0;
}