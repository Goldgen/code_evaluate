#include <stdio.h>

int GCD(int a,int b){
    return (b == 0)?a:GCD(b,a%b);
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("最大公约数是: %d",GCD(a,b));
    return 0;
}

