#include <stdio.h>
unsigned int cha(long long int n)
{
  unsigned int total=0;
  int c = 1;
  while(n>0)
  {
      total+=(n%10)*c;
      n/=10;
      c = c*8;
  }
  return total;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    printf("%d",cha(t));
    return 0;
}