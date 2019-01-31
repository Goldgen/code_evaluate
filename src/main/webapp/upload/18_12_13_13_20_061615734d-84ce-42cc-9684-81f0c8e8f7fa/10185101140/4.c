#include <stdio.h>
char *Ori(char *s);

int main()
{
    int T;
    scanf("%d",&T);
    int i; char str[60] = {'\0'};
    char *s = str;
    for (i=0; i<T; i++) {
        scanf("%s",str);
        Ori(s);
        printf("case #%d: %s",i,s);
        if (i<(T-1)) printf("\n");
    }
    return 0;
}

char *Ori(char *s)
{
    while (*s!='\0') {
        if (*s=='Z')
            *s = 'A';
        else
            (*s)++;

        s++;
    }
    return NULL;
}
