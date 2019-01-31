#include <stdio.h>
#include <ctype.h>
#include <string.h>

int hex2int(char s[]){
    int i=0,bit=0,sum=0;
    for(i=(int)strlen(s)-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            bit=s[i]-'0';
        }
        else if (isupper(s[i])){
            bit=s[i]-'A'+10;
        }
        else if(islower(s[i])){
            bit=s[i]-'a'+10;
        }
        sum+=(int)pow(16.0,(double)(strlen(s)-i-1))*bit;
    }
    return sum;
}
int main()
{
    char s[9];
    gets(s);
    printf("%d",hex2int(s));
    return 0;
}
