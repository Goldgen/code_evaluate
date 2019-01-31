#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()

int main() {
	char A = gc;
	gc;
	char B = gc;
	if(A == B) {
		printf("Tie");
	} else if((A == 'S' && B == 'C') || (A == 'C' && B == 'R') || (A == 'R' && B == 'S')) {
		printf("Alice");
	} else {
		printf("Bob");
	}

	return 0;
}
