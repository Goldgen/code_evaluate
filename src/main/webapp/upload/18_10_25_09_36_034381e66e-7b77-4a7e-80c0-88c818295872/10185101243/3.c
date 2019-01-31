#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long a=1;
    while((n>=1)&&(n<20))
     {

      a=a*n;
    --n;
     }
     printf("%lld",a);
    return 0;
}
