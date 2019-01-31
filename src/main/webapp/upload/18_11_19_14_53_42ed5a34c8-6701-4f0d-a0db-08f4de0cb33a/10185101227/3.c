#include <stdio.h>
#include <stdlib.h>
void s (int n)
{ int m;
 static int i=-1;
 if (n<=0) ++i;
 else {scanf("%d",&m);
      s(m);}
 if (n>0&&i==1) printf("%d",n);
 if (n>0&&i!=1) printf(" %d",n);
 ++i;
}
int main()
{
  int a;
  scanf("%d",&a);
   s(a);
   return 0;
}

