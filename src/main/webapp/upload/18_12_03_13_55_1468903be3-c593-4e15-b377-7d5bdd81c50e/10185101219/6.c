#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

long long int pf(int y)
{
    long long int all=1;
    for(int k=1;k<y;++k)
        all=all*16;
    return all;
}

long long int hex2int(char* s)
{
    int a[strlen(s)];
    long long int sum=0;
    int n=strlen(s);
    for(int i=0;i<strlen(s);++i)
    {
        if(isalpha(s[i]))
            {
                s[i]=toupper(s[i]);
                a[i]=s[i]-'A'+10;
            }
        else
            a[i]=(int)(s[i]-'0');
    }
    for(int i=0;i<n-1;i++){
        int q=n-1-i;
        sum=sum+pf(q)*a[i];}
    return sum;
}
int main()
{
    char s1[100];
    fgets(s1,10,stdin);
    printf("%lld",hex2int(s1));
    return 0;
}
