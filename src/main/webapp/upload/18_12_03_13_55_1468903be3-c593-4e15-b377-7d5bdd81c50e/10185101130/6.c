#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long power(long long m,long long n);

long long hex2int(char s[8]);
int main()
{
    char a[8];
    scanf("%s",a);
    printf("%lld",hex2int(a));
    return 0;
}

long long power(long long m,long long n)
{
    long long r = 1;
    for(int i = 1;i <= n;i++)
        r *= m;
    return r;
}

long long hex2int(char s[8])
{
    int len = strlen(s);
    long long dec = 0;
    for(int i = 0;i <= len-1;i++)
    {
        if(s[i] == 'A'||s[i] == 'a')
            dec += 10*(power(16,(len-i-1)));
        else if(s[i] == 'B'||s[i] == 'b')
            dec += 11*(power(16,(len-i-1)));
        else if(s[i] == 'C'||s[i] == 'c')
            dec += 12*(power(16,(len-i-1)));
        else if(s[i] == 'D'||s[i] == 'd')
            dec += 13*(power(16,(len-i-1)));
        else if(s[i] == 'E'||s[i] == 'e')
            dec += 14*(power(16,(len-i-1)));
        else if(s[i] == 'F'||s[i] == 'f')
            dec += 15*(power(16,(len-i-1)));
        else
            dec += (s[i]-'0')*(power(16,(len-i-1)));
    }
    return dec;
}
