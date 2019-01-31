#include <stdio.h>
#include <string.h>
int main()
{
    int h,i,j;
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    if(strlen(a)<strlen(b))
    {
        i=strlen(a);
        j=1;
    }
    else
    {
        i=strlen(b);
        j=2;
    }
    for(h=0;h<i;h++)
    {
        printf("%c",a[h]);
        printf("%c",b[h]);
    }
    if(j==1)
    {
        for(h=i;h<strlen(b);h++)
            printf("%c",b[h]);
    }
    else
    {
        for(h=i;h<strlen(a);h++)
            printf("%c",a[h]);
    }
    return 0;
}