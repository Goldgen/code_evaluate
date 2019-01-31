#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char a,b,c,d,e;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    switch(tolower(a)){
    case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("%s","yes");
        break;
    default:
        switch(tolower(b))
        {case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("%s","yes");
        break;
    default:
        switch(tolower(c))
        {case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("%s","yes");
        break;
    default:
        switch(tolower(d))
        {case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("%s","yes");
         break;
     default:
        switch(tolower(e))
        {case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("%s","yes");
        break;
        default:printf("%s","no");}
        }
        }
        }
    }

    return 0;
}
