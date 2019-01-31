#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int x;
    int p,n=0;
    scanf("%u %d %d",&x,&p,&n);
    x = (x << (31-p));
    x = (x >> (32-n));
    printf("%u",x);

    return 0;
}