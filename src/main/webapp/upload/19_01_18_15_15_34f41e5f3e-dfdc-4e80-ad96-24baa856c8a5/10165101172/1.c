#include <stdio.h>

int main(void)
{
    int i,j;
    for (i = 1;i < 15;i++){
        for (j = 1;j < 20;j++){
            if (10*i + 7*j == 100)
                printf("%d %d %d",i,j,100 -i - j);
        }
    }
    return 0;
}
