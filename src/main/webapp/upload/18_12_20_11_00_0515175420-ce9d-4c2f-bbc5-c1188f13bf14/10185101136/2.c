#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isAlpha[205];

void sort(char **a, int n);

int main()
{
    int t;
    char **ps[205];
    scanf("%d\n", &t);
    for (int k = 0; k < t; ++k){
        int num = 0;
        int len = 0;
        char s[205][205];
        char c;
        memset(isAlpha, true, sizeof(isAlpha));
        memset(s, 0, sizeof(s));
        while ((c = getchar()) != '\n'){
            if (c == ' '){
                s[num][++len] = '\0';
                ++num;
                len = 0;
            }
            else{
                s[num][len] = c;
                ++len;
                if (c < 'A' || c > 'Z')
                    isAlpha[num] = false;
            }
        }
        s[num][++len] = '\0';
        num++;
        for (int i = 0; i < num; ++i)
            ps[i] = s[i];
        sort(ps, num);
        printf("case #%d:\n", k);
        for (int i = 0; i < num; ++i){
            printf("%s", *(ps + i));
            if (i == num - 1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}

void sort(char **a, int num)
{
    for (int i = 0; i < num; ++i)
        for (int j = 0; j < num - i; ++j)
            if (isAlpha[j]){
                int k = 1;
                while (j + k < num - i && !isAlpha[j + k])
                    ++k;
                if (j + k == num - i)//attention!!!
                    continue;
                if (strcmp(*(a + j), *(a + j + k)) > 0){
                char *temp = *(a + j);
                *(a + j) = *(a + j + k);
                *(a + j + k) = temp;

                }
            }
}
