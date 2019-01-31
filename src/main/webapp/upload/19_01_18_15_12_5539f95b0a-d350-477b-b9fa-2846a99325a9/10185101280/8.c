#include<stdio.h>
int main()
{
    double a,b,c;
    char d;
    scanf("%lf%c%lf",&a,&d,&b);
    switch(d)
    {
        case '+'
        c=a+b;
        break;
        case '-'
        c=a-b;
        break;
        case'*'
        c=a*b;
        break;
        case '/'
        c=a/b;
        break;
    }
    printf("%.3lf",c);
    return 0;
}