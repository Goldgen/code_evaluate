#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[8],num[8];
    int i;
    fgets(ch,9,stdin);
    for(i=0;i<8;i++)
    {
        switch(ch[i])
        {
        case 'a': case 'b': case 'c':
            num[i]='2';
            break;
        case 'd': case 'e': case 'f':
            num[i]='3';
            break;
        case 'g': case 'h': case 'i':
            num[i]='4';
            break;
        case 'j': case 'k': case 'l':
            num[i]='5';
            break;
        case 'm': case 'n': case 'o':
            num[i]='6';
            break;
        case 'p': case 'q': case 'r': case 's':
            num[i]='7';
            break;
        case 't': case 'u': case 'v':
            num[i]='8';
            break;
        case 'w': case 'x': case 'y': case 'z':
            num[i]='9';
            break;
        }
    }
    printf("%s",num);
    return 0;
}
