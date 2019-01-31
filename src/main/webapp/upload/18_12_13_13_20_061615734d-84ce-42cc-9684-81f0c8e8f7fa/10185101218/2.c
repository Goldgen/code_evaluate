#include <stdio.h>
#include <string.h>

char* strmcpy(char* t,char* s,int m)
{
    for(int js = 0;js < m;js++){
        t++;
    }
    strcpy(s,t);
    return s;
}

int main(void)
{
    char s1[85] = "\0";
    char s2[85] = "\0";
    gets(s1);
    int m;
    scanf("%d",&m);
    printf("%s",strmcpy(s1,s2,m));
    return 0;
}
