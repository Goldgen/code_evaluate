#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    for (int i=0;i<a;++i)
        printf("*");
    for (int j=0;j<a-2;++j)
    {
        printf("\n*");
    for(int i=0;i<a-2;++i)
        printf(" ");
    printf("*");
    }
    printf("\n");
    for (int i=0;i<a;++i)
        printf("*");
    return 0;
}
