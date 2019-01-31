#include <stdio.h>
#include <stdlib.h>

int sumNum(int n){
    return (n == 0)?0:n%10 + sumNum(n/10);
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d\n",sumNum(n));
    return 0;
}
