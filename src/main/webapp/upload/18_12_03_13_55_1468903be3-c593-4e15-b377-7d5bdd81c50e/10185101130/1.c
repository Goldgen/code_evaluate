#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[80];
    gets(s);
    for(int i = 0;i <= 7;i++)
    {
        if(s[i]=='a'||s[i]=='b'||s[i]=='c')
            printf("2");
        else if(s[i]=='d'||s[i]=='e'||s[i]=='f')
            printf("3");
        else if(s[i]=='g'||s[i]=='h'||s[i]=='i')
            printf("4");
        else if(s[i]=='j'||s[i]=='k'||s[i]=='l')
            printf("5");
        else if(s[i]=='m'||s[i]=='n'||s[i]=='o')
            printf("6");
        else if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s')
            printf("7");
        else if(s[i]=='t'||s[i]=='u'||s[i]=='v')
            printf("8");
        else
            printf("9");
    }
    return 0;
}
