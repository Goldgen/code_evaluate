#include <cstdio>
#define lowbit(x) ((x) & (-(x)))
int main() {
	int n;
	scanf("%d", &n);
	int cnt(0);
	while(n) {
		n -= lowbit(n);
		++cnt;
	}
	return !printf("%d", cnt);
}