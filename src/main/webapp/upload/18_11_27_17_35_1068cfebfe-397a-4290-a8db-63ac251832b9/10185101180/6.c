#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,n,i,j,k,m,b;
   scanf("%d",&n);
   int shuz[n],jian[n-1];
   for(i=0;i<n;i++)
   {
       scanf("%d",&shuz[i]);
   }
  scanf("%d",&a);
  for(j=0,b=0;j<n;j++)
  {
      if(shuz[j]==a)
      {
          for(k=0;k<n;k++)
          {
              if(k<j)
                jian[k]=shuz[k];
              else if(k>j)
                jian[k-1]=shuz[k];
          }
          b++;
          break;
      }
  }
  if(b==0)
    printf("ERROR");
  else
  {
  for(m=0;m<n-1;m++)
  {
    if(m==0)
        printf("%d",jian[m]);
    else
        printf(" %d",jian[m]);
  }
  }
   return 0;
}
