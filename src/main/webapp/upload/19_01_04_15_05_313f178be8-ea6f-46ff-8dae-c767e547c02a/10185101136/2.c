#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int pow10(int a);

int main()
{
    int a, b, c;
    while (scanf("%d+%d=%d", &a, &b, &c) > 0){
        if (a + b == c){
            printf("0\n");
            continue;
        }
        int i = 1;
        bool flag = false;
        while (i <= 9){
            if (a * pow10(i) + b == c){
                flag = true;
                break;
            }
            else
                ++i;
        }
        if (flag){
            printf("%d\n", i);
            continue;
        }
        i = 1;
        flag = false;
        while (i <= 9){
            if (a + b * pow10(i) == c){
                flag = true;
                break;
            }
            else
                ++i;
        }
        if (flag){
            printf("-%d\n", i);
            continue;
        }
    }
}
int pow10(int a)
{
    int i;
    int ans = 1;
    for (i = 0; i < a; ++i)
        ans *= 10;
    return ans;
}
