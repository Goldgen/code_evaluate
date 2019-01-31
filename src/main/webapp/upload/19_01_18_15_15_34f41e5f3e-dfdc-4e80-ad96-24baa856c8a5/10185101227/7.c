#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n,y,i=0;
    scanf("%d",&n);
    while (n!=0)
    {
      y=n%2;
      if (y==1)
        ++i;
      n=(n-y)/2;
    }
    printf("%d",i);
    return 0;
}
