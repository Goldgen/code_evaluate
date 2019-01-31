#include <stdio.h>

int main() {
	char c;
    while((c = getchar())!= EOF) {
        if('A' <= c && c <= 'Z') {
            c += 'a' - 'A';
        }
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("yes");
            return 0;
        }
    }
	printf("no");
    return 0;
}
