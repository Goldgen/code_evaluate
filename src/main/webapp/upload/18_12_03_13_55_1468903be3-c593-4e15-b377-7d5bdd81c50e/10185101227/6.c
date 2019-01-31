#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    char a[9];
    gets(a);
    int m[strlen(a)];
    long long s=0;
    for(int i=0;i<strlen(a);++i)
    {
        a[i]=toupper(a[i]);
        if(isupper(a[i]))
            m[i]=a[i]-'A'+10;
        else
            m[i]=a[i]-'0';
        s=s+m[i]*pow(16,strlen(a)-i-1);
    }
    printf("%lld",s);
    return 0;
}
