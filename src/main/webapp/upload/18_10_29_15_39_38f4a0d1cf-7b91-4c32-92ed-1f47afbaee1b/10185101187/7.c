#include <stdio.h>

int main()
{
   int x, i=0, n=0;
   scanf("%d", &x);

   for (; i<32; i++)
    {
        if ((x>>i)&1==1)
        n=n+1;
    }
   printf("%d", n);
}
