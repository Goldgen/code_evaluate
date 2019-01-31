#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[80];
    gets(s);
    char ch[80];
    gets(ch);
    char t[80];
    int len1 = strlen(ch);
    int len2 = strlen(s);
    int k = 0;
    int f,j,m;
    for(int i = 0;i <= (len2-len1);i++)
    {
        for(j = i,m = 0;j <= (i+len1-1);j++,m++)
        {
            t[m] = s[j];
            if(j == (i+len1-1))
                t[m] = '\0';
        }
        if(strcmp(t,ch) == 0)
        {
            k++;
            if(k == 1)
                 f = i;
        }
    }
    printf("%s: %d time(s), first at %d",ch,k,f);
    return 0;
}
