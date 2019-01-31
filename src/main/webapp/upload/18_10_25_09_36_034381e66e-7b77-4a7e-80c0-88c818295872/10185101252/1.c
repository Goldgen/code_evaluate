#include <stdio.h>

int n = 10;
double height = 100;
double result;
int main()
{
    result = -height;
    for(int i = 1; i <= n ; i++){
        result += 2*height;
        height /= 2;
    }
    printf("%.3lf %.3lf", result, height);
    return 0;
}
