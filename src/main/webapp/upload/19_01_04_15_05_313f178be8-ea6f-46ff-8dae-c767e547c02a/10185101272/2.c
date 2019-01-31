#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long a,b,c=0,d;
    int n=0;
    scanf("%lld+%lld=%lld",&a,&b,&c);
    d=a;
    while(a+b<=c){
        if(a+b==c){
            printf("%d",n);
            return 0;
        }
        a*=10,n++;
        if(n>=12) break;
    }
    n=0;
    a=d;
    while(a+b<=c){
        if(a+b==c){
            printf("%d",n);
            return 0;
        }
        b*=10,n--;
    }
    return 0;
}


