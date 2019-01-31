#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  scanf("%d",&n);
  func(n);
  return 0;
}

int func(int m)
{
    int s;
    int i;
    s=(int)sqrt( (double)m );
    for(i=2;i<=s;i++)
       if(m%i==0)
          break;
       if(i>s)
            printf("It is a prime number.");
       else
            printf("It's not a prime number.");
    return 0;
}
