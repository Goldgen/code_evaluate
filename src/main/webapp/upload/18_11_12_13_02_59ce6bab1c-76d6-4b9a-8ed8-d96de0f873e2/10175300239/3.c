#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prime(int a);
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int a){
    int i;
    int out=1;
    for(i=2;i<sqrt(a);i++){
        if(a%i==0){
            out=0;
            break;
        }
    }
    if(out==0)
        printf("It's not a prime number.");
    else
        printf("It is a prime number.");
    return;
}