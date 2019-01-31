#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[105];
    int a[200];
    char ch[200];
    memset(a, 0, sizeof(a));
    memset(ch, 0, sizeof(ch));
    gets(s);
    int len = strlen(s);
    int i, j;
    int count = 0;
    for (i = 0; i < len; ++i){
        if (s[i] != ' '){
            bool flag = false;
            for (j = 0; j < count; j++)
                if (ch[j] == s[i]){
                    a[ch[j]]++;
                    flag = true;
                    break;
                }
            if (!flag){
                ch[count] = s[i];
                a[s[i]]++;
                count++;
            }
        }
    }
    for (i = 0; i < count; i++)
        printf("%c %d; ", ch[i], a[ch[i]]);
    return 0;
}
