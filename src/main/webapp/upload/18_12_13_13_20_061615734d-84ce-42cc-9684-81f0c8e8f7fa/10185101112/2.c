#include <stdio.h>
#include <string.h>

char t[100],s[100];
int main(){
    gets(s);
    int m;
    scanf("%d",&m);
    strmcpy(t,s,m);
    puts(t);
}

void strmcpy(char* t, char* s, int m)
{
    int i=m;
    for(;i<strlen(s);i++)
    {
        t[i-m]=s[i];
    }
}
