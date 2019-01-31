#include <stdio.h>
#include <string.h>
char* strmcpy(char* t, char* s, int m)
{
    s+=m;
    strcpy(t,s);
    return t;
}
int main() {
    char a[100],b[100];
    int m=0;
    char *s=&a,*t=&b;
    gets(a);
    scanf("%d",&m);
    puts(strmcpy(t,s,m));
    return 0;
	}
