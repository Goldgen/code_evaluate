#include <cstdio>
#include <cstring> 
using namespace std;

int main() {
	int num[12];
	int n, m;
	scanf("%d%d", &n, &m);
	for(register int i(0);i < n - m;++i) {
		scanf("%d", num + i);
	}
	if(m) {
		int nm;
		scanf("%d", &nm);
		printf("%d", nm);
		for(register int i(n - m + 1);i < n;++i) {
			int nm;
			scanf("%d", &nm);
			printf(" %d", nm);
		}
		for(register int i(0);i < n - m;++i) {
			printf(" %d", num[i]);
		}
	} else {
		printf("%d", *num);
		for(register int i(1);i < n;++i) {
			printf(" %d", num[i]);
		}
	}
	
	
	return !putchar('\n');
}