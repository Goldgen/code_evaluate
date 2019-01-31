#include <stdio.h>
#include <string.h>
long long int newpow(int a,int b)
{
    long long int m=1;
    for(long long int x=1;x<=b;x++)
    {
        m = m*a;
    }
    return m;
}
long long int sweet(char a)
{
    long long int m;
    if(a>='0'&&a<='9')
        m = a - '0';
    else if(a>='a'&&a<='f')
        m = a - 'a' +10;
    else
        m = a - 'A' +10;
    return m;
}
long long int hex2int(char str[])
{
    long long int result = 0;
    long long int n = strlen(str)-1;
    for(long long int x=0;str[x]!='\0';x++)
    {
        result+=sweet(str[x])*newpow(16,n--);
    }
    return result;
}
int main()
{
    char str1[9];
    scanf("%s",str1);
    printf("%lld\n",hex2int(str1));

           return 0;
}