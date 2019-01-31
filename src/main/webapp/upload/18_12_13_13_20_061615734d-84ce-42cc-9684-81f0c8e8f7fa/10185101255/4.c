#include <stdio.h>
#include <string.h>

int main() {
    int T = 0;
    scanf("%d", &T);
    char str[T][55];
    
    for (unsigned int i = 0; i < T; i++) {
        scanf("%s", str[i]);
    }
    
    for (unsigned int i = 0; i < T; i++) {
        for (unsigned long j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'z') str[i][j] = 'a';
            if (str[i][j] == 'Z') str[i][j] = 'A';
            else
            str[i][j] += 1;
        }
    }
    for (unsigned int i = 0; i < T; i++) {
        printf("case #%d: %s", i, str[i]);
        if (i < T - 1) printf("\n");

    }
    return  0;
    
}
