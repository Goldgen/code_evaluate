#include <stdio.h>

int plus(int a);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",plus(n));
    return 0;
}
int plus(int a){
    if(a==0)
        return 0;
    return plus(a/10)+a%10;
}