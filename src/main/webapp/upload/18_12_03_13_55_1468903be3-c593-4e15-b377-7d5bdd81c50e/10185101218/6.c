#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

long long hex2int(char sxt[],int n)
{
    long long ten = 0;
    int a = 0;
    for(int js = n-1;js >= 0;js--){
        if(sxt[js] == 'a'||sxt[js] == 'A'||sxt[js] == 'b'||sxt[js] == 'B'||sxt[js] == 'c'||sxt[js] == 'C'||sxt[js] == 'd'||sxt[js] == 'D'||sxt[js] == 'e'||sxt[js] == 'E'||sxt[js] == 'f'||sxt[js] == 'F')
            a = 10+(int)(tolower(sxt[js])-'a');
        else
            a = (int)(sxt[js]-'0');
        ten += (int)(a*pow(16.0,1.0*(n-1-js)));
    }
    return ten;
}

int main(void)
{
    char in[50];
    scanf("%s",in);
    int len = strlen(in);
    printf("%lld",hex2int(in,len));
    return 0;
}
