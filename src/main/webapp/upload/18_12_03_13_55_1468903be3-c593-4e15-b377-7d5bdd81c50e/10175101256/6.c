#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long po(int x){
    long long s=1;
    for(int i=0;i<x;i++){
        s*=16;
    }
    return s;
}
int main()
{
    char str[10];
    scanf("%s",str);
    int a[10];
    int t=strlen(str);
    long long sum=0;
    for(int i=0;i<t;i++){
        if('0'<=str[i]&&str[i]<='9')
            a[i]=str[i]-'0';
        else if('A'<=str[i]&&str[i]<='F')
            a[i]=str[i]-'A'+10;
        else
            a[i]=str[i]-'a'+10;
            sum+=a[i]*po(t-i-1);
    }
    printf("%lld",sum);
}

