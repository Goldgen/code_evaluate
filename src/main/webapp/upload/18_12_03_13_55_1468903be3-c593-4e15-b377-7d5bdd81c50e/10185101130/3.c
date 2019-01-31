#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[80];
    char b[80];
    scanf("%s %s",a,b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len = len1 > len2 ? len2 : len1;
    int lenm = len1 > len2 ? len1: len2;
    for(int i = 0;i <= len-1;i++)
    {
        printf("%c%c",a[i],b[i]);
    }
    for(int i = len;i <= lenm-1;i++)
    {
        if(lenm == len1)
            printf("%c",a[i]);
        else
            printf("%c",b[i]);
    }
    return 0;
}
