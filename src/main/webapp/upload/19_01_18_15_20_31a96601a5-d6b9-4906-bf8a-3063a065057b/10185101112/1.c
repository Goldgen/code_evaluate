#include <stdio.h>
#include <stdbool.h>

int main()
{
   int a;
   int b;
   int max;
   scanf("%d %d",&a,&b);
   max=(a>b)?a:b;
   printf("%d",max);
}