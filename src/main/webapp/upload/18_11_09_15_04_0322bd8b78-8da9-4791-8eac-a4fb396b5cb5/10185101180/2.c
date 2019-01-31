#include <stdio.h>
int main()
{
  int a,b,i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<n+1;i++)
  {
      if(i>1)
          {
              printf("\n");
          }
      for(j=1,k=i;j<2*n-2*k+1;j++)
      {

          printf(" ");
      }
      printf("1");
      for(a=2;a<i+1;a++)
      {
          printf("+%d",a);
      }
      printf("=");
      for(b=i;b>1;b--)
      {
          printf("%d+",b);
      }
      printf("1");
  }
  return 0;
}
