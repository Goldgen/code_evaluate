#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d\n",&T);
    char str[100];
    int i = 0;
    while(i < T)
    {
        gets(str);
        char *p = str;
        int len = strlen(str);
        printf("case #%d: ",i);
        for(int j = 0;j <= len-1;j++)
        {
            if(*(p+j) == 'Z')
                printf("A");
            else
                printf("%c",*(p+j) + 1);
            if(j == len-1)
                printf("\n");
        }
        i++;
    }

    return 0;
}
