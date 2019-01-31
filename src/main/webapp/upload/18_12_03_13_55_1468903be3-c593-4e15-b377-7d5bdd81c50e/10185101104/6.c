#include <stdio.h>
#include <string.h>

long long int hex2int(char s[])
{
    int i;
    long long int change=0,digit=1;
    i=strlen(s)-1;
    while(i>=0)
    {
        if(s[i]>='A'&&s[i]<='F')
            s[i]=s[i]+'a'-'A';
        if(s[i]>='0'&&s[i]<='9')
            change+=(s[i]-'0')*digit;
        else
            change+=(s[i]-'a'+10)*digit;
        digit*=16;
        i--;
    }
    return change;
}

int main()
{
    char s[10];
    scanf("%s",s);
    printf("%lld",hex2int(s));
    return 0;
}
