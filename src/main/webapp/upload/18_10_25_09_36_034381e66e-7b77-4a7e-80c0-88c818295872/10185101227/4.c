#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,i,h;
    scanf("%d",&n);
    h=1;
    while (h<n)
    { i=2;
      printf("*");
      while (i<n)
       {if (h==1||h==n)
       printf("*");
       else
        printf(" ");
       ++i;}
       printf("*\n");
       ++h;
    }
    i=1;
    while (i<n)
       {printf("*");
       ++i;}
    printf("*");
    return 0;
}
