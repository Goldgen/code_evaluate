#include <stdio.h>
int main()
{
    const float eps = 1e-5;
    float num[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%f", &num[i]);
        num[i] += eps;
        int temp = num[i] * 100;
        num[i] = temp / 100.0f;
    }
    for(int i = 0; i < 4; i++)
        printf("$%.02f ", num[i]);
    printf("$%.02f", num[4]);
}