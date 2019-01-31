#include <stdio.h>

char *strmcpy(char *t, char *s, int m)
{
    int i;
    for(i=0; ; i++)
    {
        if(*(s+i)=='\0')
            break;
        *(t+i) = *(s+m+i);
    }
}

int main()
{
    char t[100], s[100];
    int m;
    gets(s);
    scanf("%d", &m);
    strmcpy(t, s, m);
	printf("%s", t);
}
