#include <stdio.h>
int main()
{
    double number1=0.0;
    double number2=0.0;
    char operation=0;
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
        if(number2==0)
            printf("ERROR");
        else
            printf("%.3lf",number1/number2);
        break;
    default:
        printf("ERROR");
        break;
    }
    return 0;
}
