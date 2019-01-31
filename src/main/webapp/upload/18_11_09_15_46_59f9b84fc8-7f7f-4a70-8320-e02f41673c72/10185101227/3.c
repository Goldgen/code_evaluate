#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  char a;
  int n,h=1,i=-1,m,x;
  scanf("%d",&n);
  while (h<=2*n-1)
  { x=abs(n-h);
  while (x>0)
  {printf(" "); --x;}
  if (h<=n) i+=2;
   else i-=2;
  m=i;a=h+64;
  while (i>1)
  {printf("%c",a); --i;}
  i=m;
  if (h==2*n-1) printf("%c",a);
  else printf("%c\n",a);
  ++h;
  }
   return 0;
}

