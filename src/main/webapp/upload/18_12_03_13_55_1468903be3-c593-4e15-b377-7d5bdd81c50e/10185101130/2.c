#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    char s[n][30];
    char min[30];
    for(int i = 0;i <= n-1;i++)
        gets(s[i]);
    for(int i = 0;i <= n-1;i++)
    {
        for(int j = 0;j <= n-1-i;j++)
        {
            if(strcmp(s[j],s[j+1]) < 0)
            {
                strcpy(min,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],min);
            }
        }
    }
    for(int i = 0;i <= n-1;i++)
        printf("%s\n",s[i]);
    return 0;
}
