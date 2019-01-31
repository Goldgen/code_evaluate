#include <stdio.h>
#include <string.h>

void reverseOutpu(char* a);

int main()
{
    char str[100];
    char c;
    int i = 0;
    
    while ((c = getchar()) != '?') {
        str[i] = c;
        i++;
    }
    
    str[i] = '\0';
    
    reverseOutpu(str);
    return 0;
}

void reverseOutpu(char* a) {
    
	if (*a == '\0') ;
	
	else {
        reverseOutpu(a + 1);
        printf("%c", *a);
	}
}