#include<stdio.h>
#include<string.h>
#define SIZE 9

int i;
int main() {
    int n;
    char s[SIZE];
    scanf("%s",s);
    n=strlen(s);
    long long num=0;
    for(i=0;i<n;i++)
    {
        if(s[i] >= 'a' && s[i] <= 'f')
            num=16*num+s[i]-'a'+10;
        else if(s[i]>='A'&&s[i]<='F')
            num=16*num+s[i]-'A'+10;
        else if(s[i]>='0'&&s[i]<='9')
            num=16*num+s[i]-'0';
    }
    printf("%lld",num);
    return 0;
}