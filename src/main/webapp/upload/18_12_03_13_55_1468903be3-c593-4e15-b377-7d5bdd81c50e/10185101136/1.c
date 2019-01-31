#include <stdio.h>
#include <string.h>

int main()
{
    char s[85];
    int a[27] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5,
                 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; ++i){
        if (s[i] >= 'a' && s[i] <= 'z')
            printf("%d", a[s[i] - 'a']);
        else
            printf("%d", a[s[i] - 'A']);
    }
    return 0;
}
