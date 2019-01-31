#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>

long long hex2int(char*s,int);

int main( ){
    char n[10];
    scanf("%s",n);
    int len=strlen(n);
    long long k=hex2int(n,len);
    printf("%lld\n",k);
    return 0;
}

long long hex2int(char *s,int len){
    long long n=0;
    
    int num[len];
    for(int i=0;i<len;i++){
        if(s[i]=='-')num[i]=0;
        else if(s[i]>='a'&&s[i]<='f'|| s[i]>='A'&&s[i]<='Z')num[i]=tolower(s[i])-'a'+10;
        else num[i]=s[i]-'0';
        n+=num[i]*pow(16,len-1-i);
    };

    return n;
}

