#include <stdio.h>
#include <math.h>

int IsOdd(int n){
    int i=2;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main(void) {
    int n =0;
    int i =2;
    scanf("%d",&n);
    printf("%d",n);
    for(i=2;i<=n/2.0;i++){
        if(IsOdd(i)&&IsOdd(n-i)){
            printf("=%d+%d",i,n-i);
        }
    }
    return 0;
}

