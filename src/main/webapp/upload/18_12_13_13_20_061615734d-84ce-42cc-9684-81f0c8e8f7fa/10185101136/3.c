#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *i2a(char *p, int n);

int main()
{
    int n, i;
    char ch[50];
    scanf("%d", &n);
    for (i = 0; i < 50; ++i)
        ch[i] = '\0';
    int len = strlen(i2a(ch, n));
    for (i = len - 1; i >= 0; --i)
        putchar(ch[i]);
    return 0;
}
char *i2a(char *p, int n)
{
    char *ptr = p;
    while (n > 0){
        *ptr = n % 10 + '0';
        n /= 10;
        ++ptr;
    }
    return p;
}
