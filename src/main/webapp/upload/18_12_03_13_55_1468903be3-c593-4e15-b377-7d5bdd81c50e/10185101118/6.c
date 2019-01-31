#include<string.h>
#include<stdio.h>
#include<ctype.h>
long hex2int(char s[])
{
    int t;
    long m=0,g;
    t=strlen(s);
    for (int i=t-1,d=1; i>=0; i--,d++)
    {
        if (isalpha(s[i]))
        {
            s[i]=tolower(s[i]);
            switch(s[i])
            {
            case 'a':
                g=10;break;
            case 'b':
                g=11;break;
            case 'c':
                g=12;break;
            case 'd':
                g=13;break;
            case 'e':
                g=14;break;
            default:
                g=15;break;
            }
        }
        else g=s[i]-'0';
        for (int v=1; v<d; v++)
            g*=16;
        m+=g;
    }
    return m;
}
int main()
{
    char s[9];
    long t;
    scanf("%s",s);
    t=hex2int(s);
    printf("%ld",t);
    return 0;
}
