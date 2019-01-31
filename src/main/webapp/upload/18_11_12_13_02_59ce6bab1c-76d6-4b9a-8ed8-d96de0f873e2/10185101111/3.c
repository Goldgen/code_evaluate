#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void su(int n)
{
    int limit=1;
    if(n==1)limit=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            limit=0;
            break;
        }
    }
    if(limit)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
}
int main()
{
    int n;
    scanf("%d",&n);
    su(n);
}