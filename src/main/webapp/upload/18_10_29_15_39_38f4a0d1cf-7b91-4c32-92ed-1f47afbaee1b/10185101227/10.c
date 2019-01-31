#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,m=1,i,j,k,x;
    scanf("%d",&n);
    for (i=1;i<=n;i++) m=m*2;
    m--;
    for (i=0;i<=m;i++)
    {printf("{");
     j=i;k=0;x=0;
     while (j!=0)
     {if (j%2==1) {++x; if (x==1) printf("%d",k); else printf(",%d",k);}
    k++; j/=2;}
    if (i==m) printf("}");
    else printf("}\n");}
 return 0;
}
