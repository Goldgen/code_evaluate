#include<stdio.h>
int main() {
	int n,m;
	scanf("%d", &n);
	m=(n + 1) / 2;
	for(int i = 1;i < m;++i) {
		for(int j = 1;j <= n;++j) {
			if(j==m+i-1) {
				putchar('*');
				break;
			} else if(j==m-i+1) {
				putchar('*');
			} else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
	for(int i = 0;i < n;++i) {
		putchar('*');
	}
	return 0;
}
