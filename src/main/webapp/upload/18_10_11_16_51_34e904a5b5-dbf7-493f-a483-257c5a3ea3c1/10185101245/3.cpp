#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;
 scanf("%d",&num);
 int a=num/10;
 int b=num-a*10;
 printf("%d %d",b,a);

    return 0;
}