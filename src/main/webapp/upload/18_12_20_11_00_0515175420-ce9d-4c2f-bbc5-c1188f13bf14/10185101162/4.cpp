#include <cstdio>
using namespace std;

#define gc getchar()
void solve() {
	char c = gc;
	if(c == '?') return;
	solve();
	putchar(c);
}

int main() {
	return solve(), 0;
}