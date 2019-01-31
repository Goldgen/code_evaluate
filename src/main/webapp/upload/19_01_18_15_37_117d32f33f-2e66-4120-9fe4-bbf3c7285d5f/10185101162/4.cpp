#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	char c = getchar();
	if(isupper(c)) {
		printf("%c", (c ^ 0x20));
	} else {
		printf("ERROR");
	}
	
	return 0;
}