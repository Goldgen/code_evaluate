#include <stdio.h>
#include <string.h>

int main()
{
    char s1[85], s2[85], ans[200];
    scanf("%s", s1);
    scanf("%s", s2);
    int len1 = strlen(s1), len2 = strlen(s2);
    int lenMax;
    if (len1 > len2)
        lenMax = len1;
    else
        lenMax = len2;
    int lenans = 0;
    for (int i = 0; i < lenMax; ++i){
        if (i < len1)
            ans[lenans++] = s1[i];
        if (i < len2)
            ans[lenans++] = s2[i];
    }
    for (int i = 0; i < lenans; ++i)
        printf("%c", ans[i]);
    return 0;
}
