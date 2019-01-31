#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"math.h"
int hex2int(char s[])
{
    long long b=0;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            b=b+pow(16,strlen(s)-i-1)*(s[i]-'0');
        if(s[i]>='a'&&s[i]<='f')
            b=b+pow(16,strlen(s)-i-1)*(s[i]-('a'-10));
        else if(s[i]>='A'&&s[i]<='F')
            b=b+pow(16,strlen(s)-i-1)*(s[i]-('A'-10));
    }
    printf("%lld",b);
}
int main()
{
    char a[10];
    scanf("%s",&a);
    hex2int(a);
}