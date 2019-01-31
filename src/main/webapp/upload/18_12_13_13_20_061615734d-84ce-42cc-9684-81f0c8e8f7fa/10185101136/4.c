#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *find(char *result, char *ch);

int main()
{
    int t, i, j;
    char ch1[55], ch2[55];
    scanf("%d\n", &t);
    for (j = 0; j < t; ++j){
        gets(ch1);
        for (i = 0; i < 55; ++i)
            ch2[i] = '\0';
        printf("case #%d: %s\n", j, find(ch2, ch1));
    }
    return 0;
}
char *find(char *result, char *ch)
{
    char *pr = result, *pch = ch;
    int len = strlen(ch);

    for ( ;pr < result + len; pr++){
        if (*pch == 'Z')
            *pr = 'A';
        else
            *pr = *pch + 1;
        pch++;
    }
    return result;
}
