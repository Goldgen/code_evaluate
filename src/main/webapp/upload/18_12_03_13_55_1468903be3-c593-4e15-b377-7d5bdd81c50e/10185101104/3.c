#include <stdio.h>
#include <string.h>

int main()
{
    char a[80],b[80];
    int na,nb,min,i;
    scanf("%s %s",a,b);
    na=strlen(a);
    nb=strlen(b);
    min=na>nb?nb:na;
    for(i=0;i<min;i++)
        printf("%c%c",a[i],b[i]);
    if(na>nb)
        for(i=min;i<na;i++)
            printf("%c",a[i]);
    else
        for(i=min;i<nb;i++)
            printf("%c",b[i]);
    return 0;
}
