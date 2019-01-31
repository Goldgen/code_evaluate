#include<string.h>
#include<stdio.h>
int main()
{
    char ph[80];
    scanf("%s",ph);
    getchar();
    int i=0;
    while(i<8)
    {
        switch(ph[i])
        {
            case'a':case'b':case'c':
            ph[i]='2';
            break;
            case'd':case'e':case'f':
            ph[i]='3';
            break;
            case'g':case'h':case'i':
            ph[i]='4';
            break;
            case'j':case'k':case'l':
            ph[i]='5';
            break;
            case'm':case'n':case'o':
            ph[i]='6';
            break;
            case'p':case'q':case'r':case's':
            ph[i]='7';
            break;
            case't':case'u':case'v':
            ph[i]='8';
            break;
            case'w':case'x':case'y':case'z':
            ph[i]='9';
            break;
            default:
            break;
        }
        i++;
    }
    for(int i=0;i<8;i++)
        printf("%c",ph[i]);
    return 0;
}