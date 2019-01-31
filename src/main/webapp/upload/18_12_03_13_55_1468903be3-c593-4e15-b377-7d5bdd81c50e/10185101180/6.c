#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long hex2int(char s[])
{
    int i;
    long long x;
    for(i=0,x=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='f')
            x=16*x+s[i]-'a'+10;
        if(s[i]>='A'&&s[i]<='F')
            x=16*x+s[i]-'A'+10;
        if(s[i]>='0'&&s[i]<='9')
            x=16*x+s[i]-'0';
    }
    return x;
}
int main()
{
   char s[10];
   scanf("%s",s);
   printf("%lld",hex2int(s));
   return 0;
}

