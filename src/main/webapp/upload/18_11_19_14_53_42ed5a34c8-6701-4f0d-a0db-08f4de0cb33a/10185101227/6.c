#include <stdio.h>
#include <stdlib.h>
 int fibonacci(int n)
 {  int y;
    if (n==0) y=0;
    else if (n==1||n==2)  y=1;
    else y=fibonacci(n-1)+fibonacci(n-2);
    return y;
 }

int main()
{
  int x;
  scanf("%d",&x);
  printf("%d",fibonacci(x));
   return 0;
}

