#include <stdio.h>
#include <string.h>

long long hex2int(char s[], int len1);

int main()
{
    char s[10];
    scanf("%s", s);
    int len = strlen(s);
    printf("%lld", hex2int(s, len));
    return 0;
}

long long hex2int(char s1[], int len1)
{
    long long ans = 0;
    long long pow = 1;
    for (int i = len1 - 1; i >= 0; --i){
        long long x = 0;
        if (s1[i] >= '0' && s1[i] <= '9')
            x = s1[i] - '0';
        else if (s1[i] >= 'A' && s1[i] <= 'F')
            x = s1[i] - 'A' + 10;
        else
            x = s1[i] - 'a' + 10;
        ans += x * pow;
        pow *= 16;
    }
    return ans;
}
