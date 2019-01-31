#include <stdio.h>
int main(){
    long long  a,b,c;
    while(scanf("%lld+%lld=%lld",&a,&b,&c)!=EOF){
    long long  a1=a,b1=b;
    int n=0,flag=0;
    if(a==0)
        flag=1;
    else
    while(a1+b1!=c){
        a1*=10;
        n++;
        if(a1>1e10){
            n=0;
            flag=1;
            break;
        }
    }
    a1=a;
    if(flag==1)
        while(a1+b1!=c){
        b1*=10;
        n--;
    }
    printf("%d\n",n);}
}
