#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;scanf("%d",&n);
    int i;
    char str[n][30];
    char min[30];
    for(i=-1;i<n;i++)
    {
        gets(&str[i][30]);
    }
    strcpy(min,&str[0][30]);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(strcmp(&str[j][30],&str[j+1][30]>0))
            {
                strcpy(min,&str[j][30]);
                strcpy(&str[j][30],&str[j+1][30]);
                strcpy(&str[j+1],min);
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        printf("%s\n",&str[i][30]);
    }
}
