#include <stdio.h>
int main()
{
    int size=0;
    scanf("%d",&size);
    for(int i=0;i<size;++i)
        printf("*");
        printf("\n");
    for(int j=0;j<size-2;++j)
    {
        printf("*");

        for(int k=0;k<size-2;++k)
            printf(" ");

        printf("*\n");
    }
    for(int i=0;i<size;++i)
        printf("*");
    return 0;
}