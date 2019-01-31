#include <stdio.h>
#include <math.h>
int prime(int n){
    int k=0,i;
    for (i=2;i<sqrt(n);i++){
    if (n%i==0) k++;
    if (k!=0) return k;
     } 
    return k;
}
int main() {
    int n;
    scanf("%d",&n);
    if ((prime(n))||(n==1))
    printf("It's not a prime number.");
    else
    printf("It is a prime number.");
    return 0;
}