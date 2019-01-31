#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i;
    bool notFirst = false;
    for (i = 1; i < 100; ++i){
        if (i % 3 == 0 && i % 10 == 6){
            if (notFirst)
                printf(" ");
            else
                notFirst = true;
            printf("%d", i);
        }
    }
    return 0;
}
