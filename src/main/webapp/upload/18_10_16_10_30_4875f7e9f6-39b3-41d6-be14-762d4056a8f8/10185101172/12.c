#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    char m;
    scanf("%lf%c%lf",&a,&m,&b);
    switch(m)
    {
    case '+':
        printf("%.3f",a+b);
        break;
    case '-':
        printf("%.3f",a-b);
        break;
    case '*':
        printf("%.3f",a*b);
        break;
    case'/':
        printf("%.3f",a/b);
        break;
    default:
        printf("ERROR");
        break;
    }
    return 0;
}
