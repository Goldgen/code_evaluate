#include <stdio.h>
void hex2int(char hex[],int n);

int main()
{
    int num;
    char s[9];
    scanf("%s",s);
    num=strlen(s);
    hex2int(s,num);

    return 0;
}
void hex2int(char hex[],int n)
{
    int  i;
    long long num=0;
    for(i = 0; i < n; ++i)
    {
        if(hex[i] >= 'a' && hex[i] <= 'f')
            num = 16 * num + hex[i] - 'a' + 10;
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            num = 16 * num + hex[i] - 'A' + 10;
        else if(hex[i] >= '0' && hex[i] <= '9')
            num = 16 * num + hex[i] - '0';
    }
   printf("%lld",num);
}