#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double m,n,sum;
    char i;
    scanf("%lf%c%lf",&m,&i,&n);
    switch(i){
    case '+':
        sum=m+n;
        break;
    case '*':
        sum=m*n;
        break;
    case '/':
        sum=m/n;
        break;
    case '-':
        sum=m-n;
        break;
    default:
        break;
    }
    printf("%.3lf",sum);
    return 0;
}


