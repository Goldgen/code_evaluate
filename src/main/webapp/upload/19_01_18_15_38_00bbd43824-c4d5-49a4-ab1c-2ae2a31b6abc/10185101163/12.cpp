#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A,B;
    char Ch;
    scanf("%lf %c %lf",&A,&Ch,&B);
    switch(Ch)
    {
    case '+':
        printf("%.3lf",A+B);
        break;
    case '-':
        printf("%.3lf",A-B);
        break;
    case '*':
        printf("%.3lf",A*B);
        break;
    case '/':
        if(B==0)printf("ERROR");
        else printf("%.3lf",A/B);
        break;
    default:
        printf("ERROR");
        break;
    }
    return 0;
}