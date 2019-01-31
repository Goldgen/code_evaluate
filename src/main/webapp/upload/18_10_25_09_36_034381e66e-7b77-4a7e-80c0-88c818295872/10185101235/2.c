#include <stdio.h>

int main(void)

{
    int n = 4;
    int i = 0;
    float a[5];
    float Average = 0;
    for(i = 0 ; i <= n ; i++)
    {
        scanf("%f",&a[i]);
        Average = Average + a[i];
    }
    Average /= 5;
    printf("%.1f",Average);
}
