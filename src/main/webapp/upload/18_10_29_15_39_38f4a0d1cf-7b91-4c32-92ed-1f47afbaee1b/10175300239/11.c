#include <stdio.h>

int main()
{
    int a,b,c,n,count;
    count=0;
    for(n=100;n<1000;n++){
        a=n/100;
        b=n%100/10;
        c=n%10;
        if(a*a*a+b*b*b+c*c*c==n){
            if(count==0){
                printf("%d",n);
                count=1;
            }
            else
                printf(" %d",n);
        }
    }
    return 0;
}