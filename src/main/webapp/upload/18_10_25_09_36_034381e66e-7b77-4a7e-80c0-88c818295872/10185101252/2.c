#include <stdio.h>

double arr[10];
double result = 0;
int main()
{
    for(int i = 0; i < 5; i++){
        scanf("%lf", &arr[i]);
        result += arr[i];
    }
    printf("%.1f", result / 5);
}
