#include <stdio.h>
#include <stdlib.h>
int main()
{ int a[10]={0,1,2,3,4,5,6,7,8,9};
  int i,j,k;
  int n;
  scanf("%d",&n);
  int t=1<<n;
  for(i=0;i<t;i++)
   { j=i;
     k=0;
     printf("{");
     while(j)
     { int x=j&1;
         if(x)
       {  if(j==1)
         printf("%d",a[k]);
         else printf("%d,",a[k]);

       }
       j>>=1;
       ++k;
     }
      if(i<t-1)printf("}\n");
      else printf("}");
   }
   return 0;
}
