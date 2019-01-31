#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    char s1[m][n];
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%s",&s1[m][n]);
        }
    }
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%s",s1[j][0]);
        }
    }
    return 0;
}
