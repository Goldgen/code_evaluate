#include <stdio.h>
#include<math.h>
int fun(int n){
    int i;
    if(n==1)
        return 0;
    for(i=2;i<sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(fun(n))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}
