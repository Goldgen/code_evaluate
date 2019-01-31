#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,d;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c)
    {
    case '+'  :
        d=a+b;
        printf("%.3lf",d);
        break;
    case '-' :
        d=a-b;
        printf("%.3lf",d);
        break;
    case '*' :
        d=a*b;
        printf("%.3lf",d);
        break;
    case '/' :
        d=a/b;
        printf("%.3lf",d);
        break;
    }
    return 0;
}
