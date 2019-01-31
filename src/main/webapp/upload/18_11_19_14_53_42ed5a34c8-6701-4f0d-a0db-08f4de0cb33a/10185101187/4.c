#include <stdio.h>

int pri(int n)
{
   if (n==0)
       return;
   else if(n!=0)
   {
       pri(n>>1);
       putchar((n&1)+'0');
   }
}

int main()
{
    int n;
    scanf("%d", &n);

    if(n==0)
        printf("0");
    else
        pri(n);
}
