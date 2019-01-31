#include <stdio.h>
#include <stdlib.h>

char* strmcpy(char* t, char* s, int m) {
	char *p1,*p2;
    p1=t;
    p2=s;
    p2=p2+m-1;
    while(*p2)
    *p1++=*p2++;
    p1--;
    return p1; 
}

int main() {
    char a[201],b[101],cmd[7];
    int offset;
    getchar();
    gets(b);
    scanf("%d",&offset);
    strmcpy(a, b, offset);
    puts(a);
    return 0;
}

