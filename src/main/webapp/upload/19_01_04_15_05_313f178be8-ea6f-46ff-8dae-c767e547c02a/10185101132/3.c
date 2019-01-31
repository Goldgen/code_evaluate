#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char src[1005] = {0};
    char key[1005] = {0};

    scanf("%s", src);
    while(strcmp(src, "#")){
        scanf("%s", key);
        getchar();

        int keyLen = strlen(key);
        char *tempsrc = src;

        int cnt = 0;
        while(strstr(tempsrc, key)){
            cnt++;
            tempsrc = strstr(tempsrc, key) + keyLen;
        }

        printf("%d\n", cnt);

        scanf("%s", src);
    }

    return 0;
}
