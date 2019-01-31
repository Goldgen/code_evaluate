#include<stdio.h>
int main()
{
    int b[8];
    char a[100];
    fgets(a,100,stdin);
    for (int i=0; i<8; i++)
    {
        switch (a[i])
        {
        case 'a': case 'b': case 'c':
            b[i]=2;break;
        case 'd': case 'e': case 'f':
            b[i]=3;break;
        case 'g': case 'h': case 'i':
            b[i]=4;break;
        case 'j': case 'k': case 'l':
            b[i]=5;break;
        case 'm': case 'n': case 'o':
            b[i]=6;break;
        case 'p': case 'q': case 'r': case 's':
            b[i]=7;break;
        case 't': case 'u': case 'v':
            b[i]=8;break;
        default:
            b[i]=9;break;
        }
    }
    for (int i=0; i<8; i++)
        printf("%d",b[i]);
    return 0;
}
