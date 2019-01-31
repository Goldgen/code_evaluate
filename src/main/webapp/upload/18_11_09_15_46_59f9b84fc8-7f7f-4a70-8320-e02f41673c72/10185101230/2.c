#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m,n,o,s=0;
    int i;
    n=1.0;m=2.0;
for(i=1;i<=50;i++)
{
  s=s+m/n;
  o=n+m;
  n=m;
  m=o;
}
	printf("%.2f",s);
	return 0;
}
