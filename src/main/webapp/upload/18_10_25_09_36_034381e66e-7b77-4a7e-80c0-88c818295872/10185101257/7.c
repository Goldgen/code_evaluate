#include <stdio.h>
int main()
{
    int size=0;
    scanf("%d",&size);
    for(int i=0;i<(size-1)/2;++i)
        printf(" ");
    printf("*\n");
    for(int j=0;j<(size+1)/2-2;++j)
    {
        for(int m=0;m<(size-3)/2-j;++m)
            printf(" ");
        printf("*");
        for(int n=0;n<2*j+1;++n)
            printf(" ");
        printf("*\n");
    }
    for(int k=0;k<size;++k)
        printf("*");
    return 0;
}