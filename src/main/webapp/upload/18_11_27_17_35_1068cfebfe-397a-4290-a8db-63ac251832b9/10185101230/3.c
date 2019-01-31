#include <stdio.h>
#include <stdlib.h>
int main()
{
    float amounts[5] = {0.0f};
    int dollars[5] = {0L};
    int cents[5] = {0L};

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &amounts[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        dollars[i] = (int)amounts[i];
        cents[i] = (int)(amounts[i] * 100) % 100;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("$%d.%.2d ", dollars[i], cents[i]);
    }
	printf("$%d.%.2d", dollars[4], cents[4]);
    return 0;
}
