#include <stdio.h>
int reter(int);
int main()
{
    int n;
    scanf("%d",&n);
    reter(n);
    printf("%d",n);
   return 0;
}
int reter(int a)
{
    int b;
    scanf("%d",&b);
    if (b>0)
    {
         printf("%d ",reter(b));
         return a;
    }
        return a;
}
