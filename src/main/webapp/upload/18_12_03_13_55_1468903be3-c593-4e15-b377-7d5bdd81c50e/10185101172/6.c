#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int hex2int(char s[]);

int main()
{
   char s[8];
   scanf("%s",s);
   printf("%d",hex2int(s));
   return 0;
}

int hex2int(char s[])
{
    int i,sum=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            sum+=(s[i]-'0')*pow(16,strlen(s)-1-i);
        else
        {
            sum+=(tolower(s[i])-('a'-10))*pow(16,strlen(s)-1-i);
        }
    }
    return sum;
}
