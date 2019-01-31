#include <stdio.h>

int main()
{
    int even = 0, odd = 0;
    for (int i = 1; i <= 100; ++i){
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    printf("%d %d", odd, even);
    return 0;
}
