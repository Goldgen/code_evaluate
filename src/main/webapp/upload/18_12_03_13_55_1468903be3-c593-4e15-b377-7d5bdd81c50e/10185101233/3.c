#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
    char S1[80],S2[80];
    int i;
    scanf("%s%s",S1,S2);
    if(strlen(S1)>=strlen(S2))
    {
        for(i=0;i<strlen(S2);i++)
            printf("%c%c",S1[i],S2[i]);
        for(i=strlen(S2);i<strlen(S1);i++)
            printf("%c",S1[i]);
    }
    if(strlen(S1)<strlen(S2))
    {
        for(i=0;i<strlen(S1);i++)
            printf("%c%c",S1[i],S2[i]);
        for(i=strlen(S1);i<strlen(S2);i++)
            printf("%c",S2[i]);
    }
    return 0;
}
