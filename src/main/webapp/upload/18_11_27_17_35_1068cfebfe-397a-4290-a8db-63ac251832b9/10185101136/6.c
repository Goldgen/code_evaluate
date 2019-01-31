#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, a[100], element, index = -1;
    bool notFirst = false;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &element);
    for (int i = 0; i < n; ++i)
        if (a[i] == element){
            index = i;
            break;
        }
    if (index < 0)
        printf("ERROR");
    else{
        for (int i = 0; i < n; ++i){
            if (i == index)
                continue;
            if (notFirst)
                printf(" ");
            else
                notFirst = true;
            printf("%d", a[i]);
        }
    }
    return 0;
}
