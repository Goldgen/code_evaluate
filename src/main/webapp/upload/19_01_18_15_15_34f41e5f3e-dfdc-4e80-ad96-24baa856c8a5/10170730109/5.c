#include <stdio.h>

int main(void) {
    int i=1,q=2;
    int sum1=0,sum2=0;
    for(i=1;i<100;i+=2){
        sum1+=i;
    }
    for(q=2;q<=100;q+=2){
        sum2+=q;
    }
    printf("%d %d",sum1,sum2);
    return 0;
}

