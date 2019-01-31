#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char search[85], interested[85];
    gets(search);
    gets(interested);
    int len1 = strlen(search);
    int len2 = strlen(interested);
    int times = 0, first = -1;
    for (int i = 0; i < len1; ++i)
        if (search[i] == interested[0]){
            bool flag = true;
            for (int j = 0; j < len2; ++j)
                if (search[i + j] != interested[j]){
                    flag = false;
                    break;
                }
            if (flag){
                if (times == 0)
                    first = i;
                times++;
            }
        }
    printf("%s: %d time(s), first at %d", interested, times, first);
    return 0;
}
