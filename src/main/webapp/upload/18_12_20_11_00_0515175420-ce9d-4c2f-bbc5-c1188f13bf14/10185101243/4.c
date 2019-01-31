#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100];
    char *p;
    p=a;
    scanf("%c",p);
    while(*p!='?')
    {
        p++;
        scanf("%c",p);
    }
    for(p=p-1;p>=a;p--)
        {printf("%c",*p);
        }

    return 0;
}
