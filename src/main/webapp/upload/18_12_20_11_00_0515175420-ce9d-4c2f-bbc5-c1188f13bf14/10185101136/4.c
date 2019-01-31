#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len = 0;

void reverse(char s[], int n);

int main()
{
    char s[200];
    char c;
    while ((c = getchar()) != '?'){
        s[len++] = c;
    }
    reverse(s, len - 1);
    return 0;
}
void reverse(char s[], int n)
{
    if (n == 0)
        printf("%c", s[n]);
    else{
        printf("%c", s[n]);
        reverse(s, n - 1);
    }
}
