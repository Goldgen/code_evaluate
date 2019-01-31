#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int even;
    int flag;
    scanf("%d", &even);
    printf("%d", even);
    for (int i = 3; i <= even / 2; i += 2){
        flag = true;
        for (int j = 2; j <= round(sqrt(i)); ++j)
            if (i % j == 0){
                flag = false;
                break;
            }
        if (flag){
            for (int j = 2; j <= round(sqrt(even - i)); ++j)
                if ((even - i) % j == 0){
                    flag = false;
                    break;
                }
        }
        if (flag)
            printf("=%d+%d", i, even - i);
    }
    return 0;
}
