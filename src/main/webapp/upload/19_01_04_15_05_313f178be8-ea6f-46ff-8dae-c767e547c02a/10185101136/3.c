#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char a[1005], b[1005];
    scanf("%s", a);
    while (strcmp(a, "#") != 0){
        scanf("%s", b);
        int lena = strlen(a);
        int lenb = strlen(b);
        int i = 0, j;
        int ans = 0;
        while (i < lena){
            if (a[i] == b[0]){
                bool flag = true;
                for (j = 0; j < lenb; j++)
                    if (a[i + j] != b[j]){
                        flag = false;
                        break;
                    }
                if (flag){
                    ans++;
                    i = i + lenb;
                }
                else
                    i++;
            }
            else
                i++;
        }
        printf("%d\n", ans);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        scanf("%s", a);
    }
}
