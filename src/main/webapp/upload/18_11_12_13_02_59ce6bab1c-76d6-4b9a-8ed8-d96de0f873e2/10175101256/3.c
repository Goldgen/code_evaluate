#include <stdio.h>
#include <math.h>
int prime(int);
int main(){
    int n;
    scanf("%d",&n);
    if(prime(n))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
}
int prime(int n){
    switch(n){
case 2:
case 3:
case 5:
    return 1;
case 1:
case 4:
case 6:
case 8:
    return 0;
default:
			break;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}
