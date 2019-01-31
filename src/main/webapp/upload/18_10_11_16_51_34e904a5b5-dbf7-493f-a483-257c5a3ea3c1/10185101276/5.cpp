#include <stdio.h>
#include <math.h>
int main()
{
   long long int a,b,c,d;
    a=10;
    b=20;
    c=d=1;
    while (1){
        if(a>1){c=c*a;
            a=a-1;}
    else break;
    }
     while (1) {
        if(b>1){d=d*b;
        b-=1;}
        else break;
     }


        printf("%lld\n%lld",c,d);
        
    return 0;
}