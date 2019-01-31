#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a;
    int b;
    scanf("%d",&n);
    printf("*\n");
    printf("**\n");
    printf("* *\n");
    for(a=4;a<n;++a)
    {
        printf("*");
        for(b=1;b<=a-2;++b)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(a=1;a<=n;++a)
            printf("*");

    return 0;
}