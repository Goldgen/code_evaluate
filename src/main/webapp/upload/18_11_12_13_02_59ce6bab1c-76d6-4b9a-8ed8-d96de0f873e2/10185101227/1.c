#include <stdio.h>
#include <stdlib.h>
int ji(int a, int b)
{
    int y;
    y=a*b;
    return y;
}

int main()
{
  int i,h=1,n,s;
  scanf("%d",&n);
  while (h<=n)
  { i=1;s=0;
    while (i<=h)
    {++s;
    if (h==1) printf(" %d * %d = %2d\n",i,h,ji(i,h));
    else if (s!=h) printf(" %d * %d = %2d",i,h,ji(i,h));
    else if (s==h&&h!=n)printf(" %d * %d = %2d\n",i,h,ji(i,h));
    else printf(" %d * %d = %2d",i,h,ji(i,h));
    ++i;}
    ++h;
  }
 return 0;
}
