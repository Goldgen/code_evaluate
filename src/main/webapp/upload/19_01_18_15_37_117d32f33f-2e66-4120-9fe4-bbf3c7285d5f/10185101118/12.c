#include<stdio.h>
int main()
{
    char a;
    double b,c,d;
    scanf("%lf%c%lf",&b,&a,&c);
    switch(a)
    {
    case '+':
        d=b+c;printf("%.3lf",d);break;
    case '-':
        d=b-c;printf("%.3lf",d);break;
    case '*':
        d=b*c;printf("%.3lf",d);break;
    case '/':
        d=b/c;printf("%.3lf",d);break;
    default:break;
    }
    return 0;
}