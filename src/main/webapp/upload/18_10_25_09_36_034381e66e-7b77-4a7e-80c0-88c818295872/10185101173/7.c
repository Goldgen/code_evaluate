#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    for(int j=0;j<a/2;++j)
    {
        for(int i=0;i<(a/2)-j;++i)
        printf(" ");
        printf("*");
        if(j==0)
            printf("\n");
        for(int q=0;q<(2*j)-1;++q)
        printf(" ");
        if(j>0)
        printf("*\n");
    }
    for(int m=0;m<a;++m)
        printf("*");
    return 0;
}
