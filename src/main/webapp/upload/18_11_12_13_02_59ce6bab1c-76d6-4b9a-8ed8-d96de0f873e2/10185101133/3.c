#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int judge(int n){
    scanf("%d",&n);
    int i=2;int count=0;
    while(i<sqrt(n)){
        if(n%i==0)
            count++;
        i++;
    }
    if(count==0)
        return 1;
    return 0;

}


int main()
{
    int n;
    n=judge(n);
    if(n)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}

