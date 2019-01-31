#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char str[100];
    gets(str);
    int i,j=0;
    struct pair{
    char a;
    int cnt;
    };
    struct pair pairs[100];
    for(j=0;j<100;j++)
    {pairs[j].cnt=0;}
    for(i=0;i<strlen(str);i++)
    {
        if(isalnum(str[i]))
            pairs[j++].a=str[i];
    }
    for(j=0;j<100;j++)
    {
        for(i=0;i<strlen(str);i++)
        {
            if(pairs[j].a==str[i])
                pairs[j].cnt++;
        }
    }
    for(j=0;j<100;j++)
        printf(" %c %d;",pairs[j].a,pairs[j].cnt);
    return 0;
}
