#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m,n,y;
  scanf("%d%d",&m,&n);
  do{y=m%n;
    m=n;
    n=y;}while (y!=0);
    printf("最大公约数是: %d",m);
    return 0;
}
