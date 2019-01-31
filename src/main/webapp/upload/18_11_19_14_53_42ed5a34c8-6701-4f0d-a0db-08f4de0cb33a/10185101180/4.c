#include <stdio.h>
#include <stdlib.h>
int gui(int n);
int main()
{
   int a;
   scanf("%d",&a);
   gui(a);
   return 0;
}
int gui(int n)
{
    int b,c;
    b=n;
    if(b!=0)
    {
    c=b%2;
    b=b/2;
    gui(b);
    printf("%d",c);
    }
}
