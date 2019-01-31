#include <stdio.h>

int main()
{
    double a=0.0;
    double b=0.0;
    char operation;
    scanf("%lf %c %lf",&a,&operation,&b);

     switch(operation)
     {
     case '+':
        printf("%.3lf",a+b);
        break;
    case '-':
        printf("%.3lf",a-b);
        break;
    case '*':
        printf("%.3lf",a*b);
        break;
    case '/':
        if (b!=0)
            printf("%.3lf",a/b);
        break;
    default:
        break;
     }
    return 0;
    }

