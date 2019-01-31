#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i =1;
    scanf("%d",&n);
    for(int x=0.5*(n+1)-i;x>0;x--)
        printf(" ");
    printf("*");
    i++;
    printf("\n");
      while(i<0.5*(n+1))
    {
        for(int x=0.5*(n+1)-i;x>0;x--)
            printf(" ");
        printf("*");//第一个*号
        for(int x=2*i-3;x>0;x--)
        printf(" ");
        printf("*");//第二个*号
        printf("\n");
        i++;
    }

    for(int x=1;x<=n;x++)
        printf("*");
    return 0;
}