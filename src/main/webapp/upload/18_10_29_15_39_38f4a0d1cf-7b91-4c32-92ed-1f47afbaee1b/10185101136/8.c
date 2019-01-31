#include <stdio.h>
#include <string.h>

int main()
{
    int m;
    char n[100], s[100];
    scanf("%s", n);
    printf("%d ", strlen(n));
    scanf("%d", &m);
    strcpy(s, n);
    strcat(n, s);
    m = strlen(n) / 2 - m % (strlen(n) / 2);
    for (int i = 0; i < strlen(n) / 2; ++i){
        printf("%c", n[i + m]);
    }
    return 0;
}
