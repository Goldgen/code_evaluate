#include <stdio.h>

char c;
int main() {
	
	scanf("%c", &c);
	if(c >= 'A' && c <= 'Z')
		printf("%c", c + 'a' - 'A');
	else
		printf("ERROR");
	
}