#include <stdio.h>
#include <stdlib.h>
int s (int n)
{   int x,y;
    if (n/10==0) y=n;
    else {x=n%10;
    y=s(n/10)+x;}
    return y;
}

int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",s(n));
   return 0;
}

