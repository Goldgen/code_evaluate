#include <stdio.h>

int main()
{
    float amounts[5] = {0.0f};
    long dollars[5] = {0L};
    long cents[5] = {0L};

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &amounts[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        dollars[i] = (long) amounts[i];
        cents[i] = (long)(amounts[i] * 100) % 100;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("$%ld.%ld ", dollars[i], cents[i]);
    }
    printf("$%ld.%ld", dollars[4], cents[4]);
    return 0;
}