#include <cstdio>
#include <cctype>
using namespace std;

#define gc getchar()

bool sgn(false);

bool is_aeiou(char c) {
	char ch;
	if(islower(c)) {
		ch = toupper(c);
	} else {
		ch = c;
	}
	return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

int main() {
	char c;
	while(isalpha(c = gc)) {
		if(is_aeiou(c)) {
			sgn = true;
			break;
		}
	}
	if(sgn) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
