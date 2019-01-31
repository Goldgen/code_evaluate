#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int n;
    int c;
    scanf("%d",&a);
    for(n=1;n<=a;++n)
        printf("*");

      for(c=1;c<=a-2;++c)
    {
    printf("\n*");
    for(n=1;n<=(a-2);++n)
       {
        printf(" ");
       }
    printf("*");
    }
    printf("\n");
    for(n=1;n<=a;++n)
        printf("*");
    return 0;
}
