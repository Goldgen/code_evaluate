#include <stdio.h>
int main(){
    int a=1;
    unsigned long long b=1;
    a=1*2*3*4*5*6*7*8*9*10;
    int i=1;
    for(i;i<21;i++){
        b*=i;
    }
    printf("%d\n%lld",a,b);
}