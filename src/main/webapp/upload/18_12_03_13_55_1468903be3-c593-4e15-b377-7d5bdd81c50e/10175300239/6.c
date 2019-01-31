#include <stdio.h>
#include <string.h>
#include <ctype.h>
int hex2int(char s[]);
int main()
{
    char str[10];
    scanf("%s",str);
    printf("%lld",hex2int(str));
    return 0;
}
int hex2int(char s[]){
    int i,j,a;
    unsigned long long number=0;
    for(i=strlen(s)-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9')
            a=s[i]-'0';
        else{
            s[i]=toupper(s[i]);
            a=s[i]-'A'+10;
        }
        for(j=0;j<strlen(s)-1-i;j++){
            a*=16;
        }
        number+=a;
    }
    return number;
}
