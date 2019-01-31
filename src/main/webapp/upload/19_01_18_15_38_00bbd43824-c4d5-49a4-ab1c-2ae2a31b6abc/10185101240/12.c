#include <stdio.h>
int main()
{
    double a,b,r;
    float r_div;
    char op;
    scanf("%lf",&a);
    op = getchar();
	scanf("%lf",&b);
    switch(op)
    {
        case '+':
          printf("%.3lf",r = a+b);
            break;
        case '-':
            printf("%.3lf",r = a-b);
            break;
        case '*':
            printf("%.3lf",r = a*b);
            break;
        case '/':
            printf("%.3lf",r_div = a/(float)b);
            break;
        default:break;
    
    }


}
