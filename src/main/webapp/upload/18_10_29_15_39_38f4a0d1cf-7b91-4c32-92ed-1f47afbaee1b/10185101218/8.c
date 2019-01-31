#include<stdio.h>
int main(void)
{
    long long n,m,a,b,c,d,e,f,g;
    scanf("%lld%lld",&n,&m);
    a=b=e=d=0;
    c=n;
    f=1;
    while(c>=1){
        c/=10;
        a++;
    }
    printf("%lld ",a);
    for(e=0;e<a-1;e++){
        f*=10;
    }
    g=f;
    while(b<m){
        d=n%10;
        if(d!=0){
            n=d*f+n/10;
            b++;
            f=g;
        }
        else if(d==0){
            n/=10;
            b++;
        }
    }
    printf("%lld",n);
    return 0;

}
