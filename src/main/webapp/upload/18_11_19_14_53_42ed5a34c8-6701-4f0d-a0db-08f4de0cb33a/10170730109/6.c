#include <stdio.h>

int fibonacci(int);
int main(void)
{
    int x=0;
    scanf("%d",&x);
    printf("%d",fibonacci(x));
    return 0;
}
int fibonacci(int x){
    if(x==1) return 1;
    if(x==2) return 1;
    if(x>2) return fibonacci(x-1)+fibonacci(x-2);
}