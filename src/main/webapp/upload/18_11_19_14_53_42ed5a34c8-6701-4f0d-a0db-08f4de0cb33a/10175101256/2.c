#include <stdio.h>
#include <stdlib.h>
int sum(int n){
    int a=n%10;
    if(n)
        return a+sum(n/10);
}
int main()
{   int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}
