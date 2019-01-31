#include <stdio.h>


int main()
{
    double number1,number2=0;
    char operator=0;
    
    scanf("%lf%c%lf",&number1,&operator,&number2);
    
    switch(operator)
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
