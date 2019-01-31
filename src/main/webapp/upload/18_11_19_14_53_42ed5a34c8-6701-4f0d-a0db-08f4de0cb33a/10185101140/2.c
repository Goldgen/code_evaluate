#include <stdio.h>
#include <stdlib.h>

int sum(int a);
int main(void)
{
    unsigned long long num;
    scanf("%llu",&num);
    printf("%d",sum(num));
    return 0;
}

int sum(int a){
    if(a<10) return a;
    return a%10+sum(a/10);
}
