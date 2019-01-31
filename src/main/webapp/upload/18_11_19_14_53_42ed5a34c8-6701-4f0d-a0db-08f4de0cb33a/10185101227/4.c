#include <stdio.h>
#include <stdlib.h>

void er (int n)
{   int x;
    if (n==1||n==0) printf("%d",n);
    else {x=n%2;
         er(n/2);
    printf("%d",x);}
}

int main()
{
   int n;
   scanf("%d",&n);
   er(n);
   return 0;
}

