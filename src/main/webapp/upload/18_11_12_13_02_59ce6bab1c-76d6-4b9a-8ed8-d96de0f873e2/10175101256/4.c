#include <stdio.h>
#include <math.h>
long EightToTen(long );
int main(){
long n;
scanf("%ld",&n);
printf("%ld",EightToTen(n));
}
long EightToTen(long n){
    int i=0,j=0;
    long sum=0;
    while(n){
        j=n%10;
        n/=10;
        int t=1;
for(int k=0;k<i;k++){
    t*=8;
}
sum+=t*j;
        i++;
    }
    return sum;
}

