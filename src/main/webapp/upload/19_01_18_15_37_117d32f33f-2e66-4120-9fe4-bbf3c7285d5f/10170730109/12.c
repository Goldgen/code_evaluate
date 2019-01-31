#include <stdio.h>

int main(void) {
    double a=0.0;
    double b=0.0;
    char c;
    double d=0.0;
    scanf("%lf%c%lf\n",&a,&c,&b);
    switch(c){
        case '*':
            d=a*b;
            break;
        case '+':
            d=a+b;
            break;
        case '-':
            d=a-b;
            break;
        case '/':
            d=a/b;
            break;
        default:
            break;
    }
    printf("%.3lf",d);
    return 0;
}
