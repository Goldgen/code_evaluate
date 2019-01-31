#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
long long hex2int(char s[]);

int main(void)
{
    char s[9] = "0";
    scanf("%s",s);
    printf("%lld",hex2int(s));
}

long long hex2int(char s[])
{
    int len = strlen(s);
    long long dec = 0;
    int i = len-1;
    for(i = len-1;i>=0;i--)
    {
        if (s[i]>=48&&s[i]<=57)
            dec += (s[i]-'0')*pow(16,len-i-1);
        else
            dec += (tolower(s[i])-'a'+10)*pow(16,len-i-1);
    }
    return dec;
}
