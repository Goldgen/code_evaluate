#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

inline
	size_t wordlen(char const* const s) {
	register size_t i;
	for(i = 0;s[i] != '\0';++i) if(isspace(s[i])) {
		break;
	}
	return i;
}

void LongestWord(char* const str, char* result) {
	size_t len;
	size_t ret;
	str[0] = '\a';
	for(register size_t i(1);str[i - 1] != '\0';i += len + 1) {
		len = wordlen(str + i);
		if(len > ret) {
			memcpy(result, str + i, sizeof(char) * len);
			ret = len;
		}
	}
}

char str[100];
char result[100];

int main() {
	fgets(str + 1, 100, stdin);
	LongestWord(str, result);
	puts(result);
	
	return 0;
}