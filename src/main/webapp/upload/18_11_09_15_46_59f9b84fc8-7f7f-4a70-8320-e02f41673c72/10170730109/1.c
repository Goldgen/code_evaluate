#include <stdio.h>
#include <math.h>

int main(void) {
    int i=0;
    int count =0;
    for(i=0;i<10;i++){
        if((i*10+6)%3==0){
            count++;
            if(count==1){
                printf("%d",i*10+6);
            }
            else
                printf(" %d",i*10+6);
        }
    }
    return 0;
}

