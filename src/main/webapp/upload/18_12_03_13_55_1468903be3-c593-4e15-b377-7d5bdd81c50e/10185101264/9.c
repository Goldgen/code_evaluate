#include <stdio.h>
#include <string.h>
int main()
{
    char str[81], str1[81];
    gets(str);
    scanf("%s", str1);
    int len1 = strlen(str1), len = strlen(str), i, flag = 0, count = 0, loc;
    char * p = str, str2[len1 + 1];

    for(i = 0; i < len; i++)
    {
        strcpy(str2, "\0");
        strncat(str2, p + i, len1);
        if(strcmp(str1, str2) == 0)
        {
            count++;
            flag++;
        }
        if(flag == 1)
        {
            loc = i;
            flag++;
        }
    }
    if(count == 0)
        loc = -1;
    printf("%s: %d time(s), first at %d", str1, count, loc);
}