#include <stdio.h>
#include <stdlib.h>
void strmcpy(char t[], char s[], int m)
{
    int i=0;
    while(s[m]!='\0')
    {
        t[i]=s[m];
        i++;
        m++;
    }
    t[i]='\0';
}
int main()
{
    char t[81],s[81];
    int m;
    gets(s);
    scanf("%d",&m);
    strmcpy(t[81],s[81],m);
    printf("%s",t);
    return 0;
}