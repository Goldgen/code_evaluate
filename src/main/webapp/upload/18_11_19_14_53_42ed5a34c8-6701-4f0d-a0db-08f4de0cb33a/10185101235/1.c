#include <stdio.h>

float ave (float);

int main(void)
{
    float num = 0.0F;
    scanf("%f",&num);
    while(num!=-1)
    {
        printf("%.2f\n",ave(num));
        scanf("%f",&num);
    }
}

float ave(float a)
{
    static float sum = 0;
    static int amount = 0;
    sum += a;
    amount++;
    return sum/amount;
}
