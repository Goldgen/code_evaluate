#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int jw = 0, c1[100], c2[100];
    int len, lena, lenb;
    memset(c1, 0, sizeof(c1));
    memset(c2, 0, sizeof(c2));
    scanf("%s", a);
    scanf("%s", b);
    lena = strlen(a);
    lenb = strlen(b);
    if (lena > lenb)
        len = lena;
    else
        len = lenb;
    for (int i = 0; i < lena; ++i)
        a[i] -= '0';
    for (int i = 0; i < lenb; ++i)
        b[i] -= '0';
    for (int i = 0; i < len; ++i){
        if (lena - i - 1 < 0)
            c1[i] = 0;
        else
            c1[i] = a[lena - i - 1];
        if (lenb - i - 1 < 0)
            c2[i] = 0;
        else
            c2[i] = b[lenb - i - 1];
    }
    for (int i = 0; i < len; ++i){
        c1[i] = c1[i] + c2[i] + jw;
        jw = c1[i] / 10;
        c1[i] %= 10;
    }
    c1[len] = jw;
    if (c1[len] != 0)
        printf("%d", c1[len]);
    for (int i = len - 1; i >= 0; --i)
        printf("%d", c1[i]);
    return 0;
}

