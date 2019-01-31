#include <stdio.h>

int n;
char star = '*', space = ' ';
int main(){

    scanf("%d", &n);
    putchar(star);
    putchar('\n');
    for(int i = 2; i <= n - 1; i++){
        putchar(star);
        for(int j = 2; j <= i - 1; j++)
            putchar(space);
        putchar(star);
        putchar('\n');
    }
    for(int i = 1; i <= n; i++)
        putchar(star);

}
