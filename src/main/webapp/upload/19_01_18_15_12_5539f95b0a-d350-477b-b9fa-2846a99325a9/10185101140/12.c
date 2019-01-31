#include <stdio.h>

int main(void)
{
    double number1,number2;
    char operation;
    scanf("%lf %c %lf",&number1,&operation,&number2);
    switch(operation)
    {
        case '+':
            printf("%.3lf",number1+number2);
            break;
        case '-':
            printf("%.3lf",number1-number2);
            break;
        case '*':
            printf("%.3lf",number1*number2);
            break;
        case '/':
            printf("%.3lf",number1/number2);
            break;
        default:
            break;
    }
    return 0;
}
