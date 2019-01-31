#include <stdio.h>

int main (void)
{
    double num1 = 0.0;
    double num2 = 0.0;
    char operation = 0;

    scanf("%lf %c %lf",&num1,&operation,&num2);

    switch(operation)
    {
    case('+'):
        printf("%.3lf",num1 + num2);
        break;

    case('-'):
        printf("%.3lf",num1 - num2);
        break;

    case('*'):
        printf("%.3lf",num1 * num2);
        break;

    case('/'):
        if(num2 == 0)
            printf("Error.");
        else
            printf("%.3lf",num1 / num2);
        break;

    default:
        printf("Error.");
        break;
    }
    return 0;
}
