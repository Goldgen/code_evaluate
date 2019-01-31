#include <stdio.h>
#include <string.h>
int char2int(char ch)
{
    if (ch>='A'&&ch<='F')
        return ch-'A'+10;
    else if (ch>='a'&&ch<='f')
        return ch-'a'+10;
    else if (ch>='0'&&ch<='9')
        return ch-'0';
    return 0;
}
unsigned int hex2int(char s[])
{
    unsigned int n=0;
    int m=1,i,g;
    g=strlen(s);
    for(i=g-1;i>=0;i--)
    {
        n+=char2int(s[i])*m;
        m*=16;
    }
    return n;
}
int main()
{
    char shiliu[9];
    scanf("%s",shiliu);
    printf("%u",hex2int(shiliu));
    return 0;
}
