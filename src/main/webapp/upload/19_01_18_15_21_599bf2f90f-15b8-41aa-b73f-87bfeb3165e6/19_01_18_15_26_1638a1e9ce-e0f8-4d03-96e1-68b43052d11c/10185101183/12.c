#include<stdio.h>
int main(void)
{
    double a=0.0;
    double b=0.0;
    char operation=0;
    scanf("%lf %c %lf",&a,&operation,&b);

    switch(operation)
    {
        case'+':
            printf("%.3lf",a+b);
            break;

        case'-':
            printf("%.3lf",a-b);
            break;

        case'*':
            printf("%.3lf",a*b);
            break;

        case'/':
            printf("%.3lf",a/b);
            break;

        default:
            printf("ERROR");
			break;
    }
}
