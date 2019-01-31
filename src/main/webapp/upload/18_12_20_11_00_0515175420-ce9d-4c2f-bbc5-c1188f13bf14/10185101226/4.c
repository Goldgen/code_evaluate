#include <stdio.h>
#include <stdlib.h>

int main()
{
    char xiu[81];
    int i,j=0;
    scanf("%s",xiu);
    for(i=0;xiu[i]!='?';++i)
    {
        j+=1;
    }
    j=j-1;;
    for(j;j>=0;--j)
    {
        printf("%c",xiu[j]);
    }
    return 0;
}
