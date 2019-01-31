#include <stdio.h>


int main()
{
    double a=0.0,b=0.0;
    char c=0;
    scanf("%lf %c %lf",&a,&c,&b);
    switch(c)
    {
        case'+':
            printf("%.3f",a+b);
            break;
        case'-':
            printf("%.3f",a-b);
            break;
        case'*':
            printf("%.3f",a*b);
            break;
        case'/':
            printf("%.3f",a/b);
            break;
        default:
            break;
    }

}