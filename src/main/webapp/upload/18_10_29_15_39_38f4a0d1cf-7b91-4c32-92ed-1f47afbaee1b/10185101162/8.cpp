#include<cstdio>
#include<cstring>

char a[1024];
char ans[1024];

int main() {
	unsigned long long b, n;
	scanf("%s %llu", a, &b);
	n = strlen(a);
	b %= n;
	strcpy(ans, a + (n - b));
	memcpy(ans + b, a, n - b);
	return !printf("%llu %s", n, ans);
}