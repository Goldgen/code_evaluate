#include <stdio.h>
int main()
{
   int n=0;
   int m=1;
   int k=0;
   int p=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
        m=m*2;
   m=m-1;
   for(int i=0;i<=m;i++)
   {
       printf("{");
       int j=i;
       k=0;
       while(j!=0)
       {
           p=0;
           if(j%2==1)
           {
            p=1;
            printf("%d",k);
           }
           j=j/2;
           if(p&&j!=0)
            printf(",");
           k=k+1;
       }
       if(i<m)
       printf("}\n");
       else
        printf("}");
   }
}
