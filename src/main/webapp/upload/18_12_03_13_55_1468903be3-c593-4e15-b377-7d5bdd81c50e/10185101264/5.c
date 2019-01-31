#include <stdio.h>
#include <string.h>
int main()
{
    char str1[161], str2[161], str3[161];
    scanf("%s %s", str1, str2);

    strcpy(str3, str2);
    strcat(str3, str2);

    if(strlen(str1) == strlen(str2) && strstr(str3, str1) == NULL)
        printf("\"%s\" is NOT a rotation of \"%s\"", str1, str2);
    else if(strlen(str1) == strlen(str2))
        printf("\"%s\" is a rotation of \"%s\"", str1, str2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"", str1, str2);
}