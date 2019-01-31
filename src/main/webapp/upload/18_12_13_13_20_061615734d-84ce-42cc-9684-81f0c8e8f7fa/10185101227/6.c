#include <stdio.h>
void rotate(int* p, int n, int m)
{ int i=0,k=0;
  int x[12];
  int *flag=p;
  flag+=n-m;
  while (i<m)
  {
     x[i]=*flag;
     ++flag;
     ++i;
  }
  while (i<n)
  {
      x[i]=*p;
      p++;
      ++i;
  }
  for(k=0;k<n-1;++k)
  {
      printf("%d ",x[k]);
  }
  printf("%d",x[k]);
}
int main()
{
int n,m;
int a[12];
scanf("%d %d\n",&n,&m);
for(int i=0;i<n;++i)
{
    scanf("%d",&a[i]);
}
rotate(a,n,m);
 return 0;
}


