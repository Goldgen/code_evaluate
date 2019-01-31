#include <stdio.h>
#include <string.h>

#define LIM 510
#define max(a, b) (a) > (b) ? (a) : (b)

void reverse1(char *a);
char a[LIM];
char b[LIM];
char c[LIM];

int main()
{
    int len_a, len_b, i, digsum, biglen;

    scanf("%s %s", a , b) ;
        len_a = strlen(a);
        len_b = strlen(b);
        biglen = max(len_a, len_b);
        reverse1(a);
        reverse1(b);
        for (i = len_a; i < biglen + 1; i++){
            a[i] = '0';
        }
        for (i = len_b; i < biglen + 1; i++){
            b[i] = '0';
        }

        for (i = 0, c[0] = '0'; biglen > 0; biglen--){
            digsum = c[i] + a[i] + b[i] - 3 * '0';
            c[i] = digsum % 10 + '0';
            c[++i] = digsum / 10 + '0';
        }

        i = max(len_a, len_b);
        if (c[i] == '0'){
            i--;
        }
        while (i >= 0){
            putchar(c[i--]);
        }
        putchar('\n');

    return 0;
}

void reverse1(char *a)
{
    int len = 0;
    while (a[len] != '\0'){
        len++;
    }
    int i, t;
    for (i = 0; i < len/2; i++){
        t = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = t;
    }
    a[len] = '\0';
}
