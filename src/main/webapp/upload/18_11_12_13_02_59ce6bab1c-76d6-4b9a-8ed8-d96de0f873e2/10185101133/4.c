#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int change(unsigned long long a){
    unsigned long long n;
    scanf("%llu",&n);
    if(n<=7)
        return n;
    int num[100]={0};
    int i=0,count=0;
    while(n){
        num[i]=n%10;
        n/=10;
        i++;count++;
    }
    i=0;
    while(i<=count){
        n+=pow(8,i)*num[i];
        i++;
    }
    return n;
}


int main()
{
    unsigned long long n;
    n=change(n);
    printf("%llu",n);
    return 0;
}
