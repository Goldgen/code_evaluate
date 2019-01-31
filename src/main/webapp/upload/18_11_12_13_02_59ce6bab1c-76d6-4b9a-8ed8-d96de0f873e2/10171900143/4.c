#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
unsigned powr(unsigned,unsigned);
int main()
{
    unsigned long long n;
    unsigned sum=0;unsigned a;
    scanf("%llu",&n);
    for(int i=0;n>0;i++){
            a=n%10;n/=10;
        sum+=a*powr(8,i);
    }
    printf("%u",sum);
    return 0;
}
unsigned powr(unsigned a,unsigned b){
    if(b==0)return 1;
    b--;
    unsigned t=a;
    for(int i=0;i<b;i++){
        t*=a;
    }
    return t;
}



