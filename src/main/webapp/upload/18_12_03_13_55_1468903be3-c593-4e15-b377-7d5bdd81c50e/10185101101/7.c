#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define min(a,b) a<b?a:b;
#define max(a,b) a>b?a:b;
int main()
{
    char string1[1000];
    char string2[1000];
    scanf("%s %s",string1,string2);
    int i=0;
    int p=min(strlen(string1),strlen(string2));
    int q=max(strlen(string1),strlen(string2));

    for(i=p;i<q;++i)
    {
        if(strlen(string1)>strlen(string2))
            printf("%c",string1[i]);
        else
            printf("%c",string2[i]);
    }
    return 0;
}