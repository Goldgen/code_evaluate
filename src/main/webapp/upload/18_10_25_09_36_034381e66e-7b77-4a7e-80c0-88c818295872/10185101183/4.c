#include <stdio.h>
int main(void)
{
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        printf("*");
    printf("\n");
    for(int i=0;i<n-2;++i)
    {
        printf("*");
        for(int j=0;j<n-2;++j)
        printf(" ");
       printf("*\n");
    }
    for(int i=0;i<n;++i)
        printf("*");
    return 0;
}
