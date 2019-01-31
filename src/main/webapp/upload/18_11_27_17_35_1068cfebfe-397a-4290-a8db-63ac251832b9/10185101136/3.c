#include <stdio.h>
#include <string.h>

int main()
{
    char amounts[100];

    for (int i = 0; i < 5; ++i){
        scanf("%s", amounts);
        if (i != 0)
            printf(" ");
        int len = 0;
        len = strlen(amounts);
        int j = 0;
        printf("$");
        while (j < len &&amounts[j] != '.'){
            printf("%c", amounts[j]);
            j++;
        }
        if (j >= len){
            printf(".00");
            continue;
        }
        printf(".");
        j++;
        for (int k = 0; k < 2; ++k){
            if (j + k < len)
                printf("%c", amounts[j + k]);
            else
                printf("0");
        }
    }
    return 0;
}