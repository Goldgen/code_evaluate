#include <cstdio>
using namespace std;

void solve(int n) {
	if(!n) {
		return;
	}
	solve(n - 1);
	for(register int i(1);i <= n;++i) {
		printf(" %d * %d = %2d", i, n, i * n);
	}
	putchar('\n');
}

int main() {
	int n;
	scanf("%d", &n);
	solve(n - 1);
	for(register int i(1);i <= n;++i) {
		printf(" %d * %d = %2d", i, n, i * n);
	}
	
	return 0;
}