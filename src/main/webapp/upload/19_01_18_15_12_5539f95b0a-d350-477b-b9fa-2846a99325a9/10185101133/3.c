#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,p,n=0;
    int BIN[32];
    unsigned int x,sum=0;
    scanf("%u %d %d",&x,&p,&n);
    for(;i<=31;i++){
        BIN[i]=x%2;
        x=x/2;
    }
    while(n)
    {
        BIN[p]^=1;
        --n;
        p--;
    }
    i=0;
    for(;i<=31;i++){
        if(BIN[i]==1)
        sum=sum+pow(2,i);
    }
    printf("%u",sum);
    return 0;
}
