#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int i;
int main()
{
    long long int a,b,c,d;
    scanf("%lld+%lld=%lld",&a,&b,&c);
    d=a+b;
    if(c==d) {printf("0");return 0;}
    for(i=0,d=a*10;i<20;i++){
        if((d+b)==c){
            printf("%lld",i+1);
            return 0;
        }
        d*=10;
    }
    for(i=0,d=b*10;i<20;i++){
        if((a+d)==c){
            printf("-%lld",i+1);
            return 0;
        }
        d*=10;
    }
    return 0;
}
