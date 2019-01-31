#include<stdio.h>
int main()
{
    double A,B,answer;
    char S;
    scanf("%lf%c%lf",&A,&S,&B);
    switch(S)

    {
    case '+':
        answer=A+B;
        break;
    case '-':
        answer=A-B;
        break;
    case '*':
        answer=A*B;
        break;
    default:
        answer=A/B;
        break;
    }
    printf("%.3lf",answer);
    return 0;
}
