#include<stdio.h>
int main()
{
    float fahr;
    scanf("%f",&fahr);
    int celsius = 5*(fahr-32)/9;
    printf("celsius = %d",celsius);
    return 0;
}
