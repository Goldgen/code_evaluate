#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    long long n,a,b;
    scanf("%d",&n);
    a=1;
    while(n>0)
     {

      a=a*n;
      --n;
     }
     b=a%20181111;
     printf("%d",b);
    return 0;
}