#include<stdio.h>
#include<math.h>
int prime(int);

int main(void)
{
    int n;
    scanf("%d",&n);
    if(prime(n)==1)printf("It is a prime number.");
    else printf("It's not a prime number.");
    return 0;
}

int prime(int n)
{
    int a,b;
    b=0;

    if(n!=1){
        for(a=2;a<=sqrt(n);a++){
            if(n%a==0)
                b++;
        }
        if(b==0)
            return 1;
    }
}
