#include <stdio.h>
int main(){
    double a,b,answer;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c){
    case'+':
        answer=a+b;
        break;
            case'-':
        answer=a-b;
        break;
            case'*':
        answer=a*b;
        break;
            case'/':
        answer=a/b;
        break;
            default:
                break;
    }
printf("%.3lf",answer);
}