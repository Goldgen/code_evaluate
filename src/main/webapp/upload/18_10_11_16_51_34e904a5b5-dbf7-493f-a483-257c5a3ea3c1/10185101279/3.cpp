#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int a;
    int b;
    scanf("%d",&num);
    a=num%10;
    b=(num-a)/10;
    printf("%d %d",a,b);
    return 0;
}

	