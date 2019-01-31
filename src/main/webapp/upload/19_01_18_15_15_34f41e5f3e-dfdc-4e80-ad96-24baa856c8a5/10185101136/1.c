#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int i = 1; i <= 100 / 7; ++i)
        for (int j = 1; j <= 100 / 5; ++j)
            for (int k = 1; k <= 100; ++k)
                if (i + j + k * 3 == 100 && i * 7 + j * 5 + k == 100)
                    printf("%d %d %d", i, j, k * 3);
    return 0;
}

