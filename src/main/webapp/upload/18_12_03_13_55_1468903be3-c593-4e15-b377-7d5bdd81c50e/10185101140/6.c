#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 10
long long int hex2int(char s[]);

int main()
{
    char hex[ARRA_SIZE] = {'\0'};
    scanf("%s",hex);

    printf("%lld",hex2int(hex));
    return 0;
}

long long int hex2int(char s[]){
    size_t n = strlen(s);
    int a[ARRA_SIZE*2] = {0};
    int i;
    for (i=0; i<n; i++){
        if ((s[i]>='A')&&(s[i]<='Z'))
            a[i] = (s[i]-'A')+10;
        else if ((s[i]>='a')&&(s[i]<='z'))
            a[i] = (s[i]-'a')+10;
        else a[i] = s[i]-'0';
    }
    long long int dec_result = 0;
    for (i=0; i<n; i++){
        int j; long long mul = 1;
        for (j=1; j<(n-i); j++){
            mul*=16;
        }
        dec_result += (a[i]*mul);
    }
    return dec_result;
}
