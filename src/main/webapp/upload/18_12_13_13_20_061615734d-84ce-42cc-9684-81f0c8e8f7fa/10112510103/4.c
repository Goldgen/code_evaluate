/*
 * 94: ?????????????
 */
#include <stdio.h>
#include <string.h>

char* convert(char* str) {
    int i, str_len = strlen(str);
    for (i = 0; i < str_len; i++) {
        str[i] = (str[i] - 'A' + 1)  % 26 + 'A';
    }
    return str;
}

int main(void) {
    int n;
    char str[51];
    scanf("%d", &n);
    for (int cas = 0; cas < n; ++cas) {
        scanf("%s", str);
        printf("case #%d: %s\n", cas, convert(str));
    }
    return 0;
}
