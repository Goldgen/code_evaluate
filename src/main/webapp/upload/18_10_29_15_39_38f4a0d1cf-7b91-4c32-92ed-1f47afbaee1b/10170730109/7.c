#include <stdio.h>

int main(void) {
    int n=0,count=0,q=0;
    scanf("%d",&n);
    for(;n>0;n=n/2){
        q=n%2;
        if(q==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}



