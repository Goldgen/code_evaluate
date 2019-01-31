#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char alp[81];
    scanf("%s",alp);
    int i=0;
    int len=strlen(alp);
    for(i=0;i<len;++i)
    {
        switch(alp[i])
       {
        case 'a':case 'b': case 'c':
        printf("2");
        break;
        case 'd':case 'e': case 'f':
        printf("3");
        break;
        case 'g':case 'h':case 'i':
        printf("4");
        break;
        case 'j':case 'k': case 'l':
        printf("5");
        break;
        case 'm':case 'n':case 'o':
        printf("6");
        break;
        case 'p':case 'q': case 'r':case 's':
        printf("7");
        break;
        case 't':case 'u': case 'v':
        printf("8");
        break;
        case 'w':case 'x': case 'y':case 'z':
        printf("9");
        break;
       }
    }
    return 0;
}