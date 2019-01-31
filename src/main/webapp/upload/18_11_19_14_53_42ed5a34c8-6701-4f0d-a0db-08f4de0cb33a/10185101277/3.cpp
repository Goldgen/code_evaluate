#include <cstdio>
using namespace std;

void solve() {
	int n;
	scanf("%d", &n);
	if(n > 0) {
		solve();
		printf("%d ", n);
	}
}

void ent() {
	int n;
	scanf("%d", &n);
	solve();
	printf("%d\n", n);
}

int main() {
	ent();
	
	return 0;
}