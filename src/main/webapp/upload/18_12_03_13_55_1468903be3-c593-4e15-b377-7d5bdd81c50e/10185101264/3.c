#include <stdio.h>
#include <string.h>
int min_ab(int a, int b)
{
    if(a > b)
        return b;
    return a;
}
int main()
{
    char s1[81] = {'\0'}, s2[81] = {'\0'}, str[162] = {'\0'};
    int i, len1, len2, min;
    scanf("%s %s", s1, s2);

    len1 = strlen(s1);
    len2 = strlen(s2);
    min = min_ab(len1, len2);

    for(i = 0; i < min; i++)
    {
        str[2 * i] = s1[i];
        str[2 * i + 1] = s2[i];
    }

    if(min < len1)
        for(i = len2; i < len1; i++)
            str[i + len2] = s1[i];
    else
        for(i = len1; i < len2; i++)
            str[i + len1] = s2[i];

    puts(str);
}