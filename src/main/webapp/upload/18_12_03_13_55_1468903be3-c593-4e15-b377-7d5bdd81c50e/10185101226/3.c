#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[81],s2[81];
    scanf("%s %s",&s1,&s2);
    int i;
    int len,lan,n;
    len=strlen(s1);
    lan=strlen(s2);
    if(len<lan)
        n=len;
    else
        n=lan;
    for(i=0;i<n;++i)
    {
        printf("%s%s",s1[i],s2[i]);
    }
    if(len<lan)
    {
        for(i=n;i<lan;++i)
            printf("%s",s2[i]);
    }
    else
    {
        for(i=n;i<len;++i)
            printf("%s",s2[i]);
    }
    return 0;
}
