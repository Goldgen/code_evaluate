#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int hex2int(char s[]);
char ch='0';


char sh[1000];
int main()
{
    scanf("%s",sh);

    printf("%lld",hex2int(sh));

}
int hex2int (char s[]){
     unsigned long long int sum=0ULL;
    for(int i=0; i<strlen(s); i++){
        if(((s[i]-ch)<10)&&(s[i]-ch>0)){
        s[i]=s[i]-ch;
        sum+=s[i]*pow(16,strlen(s)-i-1);
        }
        else if((s[i]>='A')&&(s[i]<='F')){
        s[i]=s[i]-'A'+10;
        sum+=s[i]*pow(16,strlen(s)-i-1);
        }
        else if((s[i]>='a')&&(s[i]<='f')){
        s[i]=s[i]-'a'+10;
        sum+=s[i]*pow(16,strlen(s)-i-1);
        }
        else if(s[i]-ch==0){
        sum+=0;
        }
    }
    return sum;
}
