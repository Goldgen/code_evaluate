#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long hex2int(char s[]){
    int n=strlen(s);
    int i=0;
    int num[10]={0};
    long long number=0;
    for(i=0;i<n;i++){
        if(s[i]<=57 && s[i]>=48)
            num[i]=s[i]-48;
        else if(s[i]<=70 && s[i]>=65)
            num[i]=s[i]-55;
        else if(s[i]<=102 && s[i]>=97)
            num[i]=s[i]-87;
        number+=pow(16,n-i-1)*num[i];
    }
    return number;
}

int main()
{
    char s[11];
    gets(s);
    printf("%lld",hex2int(s));
    return 0;
}
