#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[80];
    char lon[80];
    scanf("%s",lon);
    int lenlong= strlen(lon);
    while(scanf("%s",s)>0)
    {
        int len = strlen(s);
        if(len > lenlong)
        {
            strcpy(lon,s);
            lenlong = strlen(s);
        }
    }
    printf("%s\n",lon);
    return 0;
}
