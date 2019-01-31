#include <stdio.h>

int main(void) {
    int a=100;
    int b,c,d;
    int n=0;
    for(a=100;a<1000;a++){
        b = a/100;
        d = a%10;
        c = (a-b*100-d)/10;
        if(a==(b*b*b+c*c*c+d*d*d)){
            n++;
            if(n==1){
                printf("%d",a);
            }
            else
            printf(" %d",a);
        }
    }
    return 0;
}

