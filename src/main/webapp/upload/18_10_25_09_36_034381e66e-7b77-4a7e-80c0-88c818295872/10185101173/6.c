#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    for (int i=0;i<a-1;++i)
        {
            printf("*");
            for(int j=0;(i>=1)&&(j<i-1);++j)
                printf(" ");
            if(i>=1)
            printf("*\n");
            else
            printf("\n");
        }
    for (int i=0;i<a;++i)
        printf("*");
    return 0;
}
