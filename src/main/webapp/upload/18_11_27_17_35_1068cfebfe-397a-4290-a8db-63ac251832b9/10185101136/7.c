#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a[100];
    int n, key;
    bool notFirst = false, find = false;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    for (int i = 0; i < n; ++i)
        if (a[i] == key){
            find = true;
            if (notFirst)
                printf(" ");
            else
                notFirst = true;
            printf("%d", i);
        }
    if (!find)
        printf("ERROR");
    return 0;
}
