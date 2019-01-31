#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int t=strlen(s);
    int x=0;
    for(int i=0;i<t/2;i++){
        if(s[i]!=s[t-i-1])
            x++;
    }
    if(x)
        printf("False");
    else
        printf("True");
}

