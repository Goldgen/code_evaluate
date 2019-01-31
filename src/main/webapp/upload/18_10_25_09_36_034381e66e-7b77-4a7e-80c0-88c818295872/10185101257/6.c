#include <stdio.h>
int main()
{
    int size=0;
    scanf("%d",&size);
    for(int i=0;i<size-1;++i)
    {
        for(int j=0;j<i-1;++j)
            printf(" ");
        printf("*\n*");
    }
    for(int k=0;k<size-1;++k)
        printf("*");
    return 0;
}
