#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	char c = getchar();
	if(islower(c)) {
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			printf("vowel");
		} else {
			printf("consonant");
		}
	} else {
		printf("ERROR");
	}
	
	return 0;
}