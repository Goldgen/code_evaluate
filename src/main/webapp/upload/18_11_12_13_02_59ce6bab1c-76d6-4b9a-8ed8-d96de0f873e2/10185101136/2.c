#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isgraph(int a);

int main()
{
    int st, ed;
    bool flag = true, notFirst = false;
    scanf("%d%d", &st, &ed);
    for (int i = st; i <= ed; ++i){
        if (isgraph(i)){
            flag = false;
            if (notFirst)
                printf("\n");
            else
                notFirst = true;
            if (i / 100 == 1)
                printf("%d%6c", i, i);
            else
                printf("%d%7c", i, i);
        }
    }
    if (flag)
        printf("NONE");
    return 0;
}

bool isgraph(int a)
{
    if (a >= 33 && a <= 126)
        return true;
    else
        return false;
}
