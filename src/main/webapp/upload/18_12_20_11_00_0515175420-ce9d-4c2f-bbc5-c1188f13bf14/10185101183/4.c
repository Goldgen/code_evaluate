#include <stdio.h>

int main()
{
    char ch[100];int i=0;
    while((ch[i]=getchar( ))!='?')
    ++i;
    for(int j=i-1;j>=0;--j)
    printf("%c",ch[j]);
    return 0;
}
