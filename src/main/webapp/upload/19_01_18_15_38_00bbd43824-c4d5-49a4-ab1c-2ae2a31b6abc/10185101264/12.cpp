#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char x;
    double a,b;

    scanf("%lf%c%lf",&a,&x,&b);
    if(x=='+')
        printf("%.3lf",a+b);
    else if(x=='-')
        printf("%.3lf",a-b);
    else if(x=='*')
        printf("%.3lf",a*b);
    else if(x=='/')
        printf("%.3lf",a/b);

    return 0;
}