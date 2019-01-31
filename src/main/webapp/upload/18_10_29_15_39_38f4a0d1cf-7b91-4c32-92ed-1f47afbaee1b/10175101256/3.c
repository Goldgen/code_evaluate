#include <stdio.h>
#include <math.h>
int sushu(int x){
    for(int k=3;k<=sqrt(x);k+=2){
        if(0==x%k)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
    for(int i=3;i<=n/2;i+=2){
        for(int j=n-1;j>=n/2;j-=2){
            if(n==i+j&&sushu(i)&&sushu(j))
                printf("=%d+%d",i,j);
        }
    }
}