#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str1[1001], str2[1001];
    while(scanf("%s", str1) && (strcmp(str1, "#") != 0))
    {
        scanf("%s", str2);
        int sum = 0, len = strlen(str2);
        char * p;
        while((p = strstr(str1, str2)) != NULL)
        {
            sum++;
            strcpy(str1, p + len);
        }
        printf("%d\n", sum);
    }
}
