#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    {for(int i=n;i>0;i--)
    {
        printf("*");
    }
    for(int i=n;i>2;i--)
    {
        printf("\n*");
        for(int i=n;i>2;i--)
            printf(" ");
        printf("*");
    }
    printf("\n");
    for(int i=n;i>0;i--)
    {
        printf("*");
    }
    }

    return 0;
}
