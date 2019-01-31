#include <stdio.h>

int main()
{
    int a, remainder, num = 0;
    scanf("%d", &a);
    while (a != 0){
        remainder = a % 2;
        a = a / 2;
        if (remainder == 1)
            num++;
    }
    printf("%d", num);
    return 0;
}
