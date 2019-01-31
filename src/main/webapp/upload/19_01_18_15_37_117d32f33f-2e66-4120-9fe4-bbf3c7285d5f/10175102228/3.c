#include<stdio.h>
unsigned int invert(unsigned int x,unsigned int p,unsigned int n)
{ return x^(~(~0<<n)<<(p-n+1));

}
 int main()
 {  unsigned int x,p,n,y;
    scanf("%u%u%u",&x,&p,&n);
  y=invert(x,p,n);
  printf("%u",y);
  return 0;

 }