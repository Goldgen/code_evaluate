#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* rev(void);

int main(void)
{
    puts(rev());
}

char* rev(void)
{
    static char str[1000];
    static int i = 0;
    str[i] = getchar();
    if(str[i]=='?')
    {
        char ch;
        int n = i-1;
        str[i] = '\0';
        for(i=0;i<=n/2;i++)
        {
            ch = str[i];
            str[i] = str[n-i];
            str[n-i] = ch;
        }
        return str;
    }
    i++;
    rev();
}
