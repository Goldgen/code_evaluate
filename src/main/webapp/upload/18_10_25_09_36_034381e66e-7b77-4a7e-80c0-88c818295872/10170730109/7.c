#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int i = 1;
    int s = 1;
    int q = 1;
    for(i=1;i<=((n-1)/2);i++){
        for(s=1;s<=((n-2*i+1)/2);s++){
            printf(" ");
        }
        if(i>1){
            printf("*");
            for(q=1;q<=(2*i-3);q++){
                printf(" ");
            }
        }
        printf("*\n");
    }
    for(i=n;i>0;i--){
        printf("*");
    }
    return 0;
}
