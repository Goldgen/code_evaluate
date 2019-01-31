#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char s[15][35];
    for (int i = 0; i < n; ++i)
        gets(s[i]);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - i; ++j)
            if (strcmp(s[j], s[j + 1]) < 0){
                char tmp[35];
                strcpy(tmp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], tmp);
            }
    for (int i = 0; i < n; ++i)
        printf("%s\n", s[i]);
    return 0;
}
