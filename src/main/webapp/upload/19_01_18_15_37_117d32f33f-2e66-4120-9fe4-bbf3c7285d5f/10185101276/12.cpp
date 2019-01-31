#include<stdio.h>
#include<string.h>
int main()
{
    double a,b,d;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c)
    {
    case '+':
        d=a+b;
        break;
    case '-':
        d=a-b;
        break;
    case '*':
        d=a*b;
        break;
    default:
        d=a/b;
        break;
    }
    printf("%.3lf",d);
    return 0;
}