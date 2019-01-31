#include <stdio.h>
#include <stdlib.h>

int cal(int n)
{
    static int sum=0;
    if(n)
        sum+=n%10;
    else
        return sum;
    cal(n/10);
   
}
int main()
{
   int n;
   scanf("%d",&n);
   printf("%d",cal(n));

    return 0;
}
