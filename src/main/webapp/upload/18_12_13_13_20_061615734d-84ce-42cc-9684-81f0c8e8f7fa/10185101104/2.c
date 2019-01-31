#include <stdio.h>

char* strmcpy(char* t, char* s, int m)
{
    int i=0;
    while(*(s+m+i)!=0)
    {
        *(t+i)=*(s+m+i);
        i++;
    }
    *(t+i)=0;
    return t;
}

int main()
{
    char t[100],s[100];
    int m;
    gets(s);
    scanf(" %d",&m);
    printf("%s",strmcpy(t,s,m));
    return 0;
}
