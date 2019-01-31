#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,i=0,j=0;
    char t[81];
    char s[81];
    scanf("%d",&m);
    for(i;i<m;++i)
    {
        scanf("%s",t);
        printf("case #%d: ",i);
        for(j;t[j]!='\0';++j)
        {
            printf("%c",++t[j]);
        }
    }
    return 0;
}