#include <stdio.h>
#include <math.h>
int su(int a){
    int i;
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
	if (n==1||su(n))
            printf("It's not a prime number.");
    else
            printf("It is a prime number.");
return 0;
}
