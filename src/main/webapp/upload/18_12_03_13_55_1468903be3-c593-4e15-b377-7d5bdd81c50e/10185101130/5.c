#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    char c[1000];
    char m;
    scanf("%s",a);
    scanf("%s",b);
    strcpy(c,a);
    int len = strlen(a);
    for(int i = 0;i <= len-1;i++)
    {
        m = a[len-1];
        for(int j = len-1;j >= 1;j--)
            a[j] = a[j-1];
        a[0] = m;
        if(strcmp(a,b) == 0)
        {
            printf("\"%s\" is a rotation of \"%s\"",c,b);
            break;
        }
        else if(i == len-1)
            printf("\"%s\" is NOT a rotation of \"%s\"",c,b);
    }
    return 0;
}
