#include<stdio.h>
#include<math.h>
int main()
{
   int n,m,i,j,x;
   scanf("%d",&n);
    m=1;
   for(i=1;i<=n;i++)
    m*=2;
    m--;   //Calculate the number of the n;
   for(i=0;i<=m;i++)
   {
       printf("{");
       j=i;
       x=0;
     while(j!=0)
       {
           if(j%2==1) //turn the n into the 2 system.
           {
             if(j>2)
            printf("%d,",x);
            if(j<=2)
                 printf("%d",x);
           }
           x++;
           j/=2;
       }
       printf("}");
       if(i<m)
        printf("\n");
       if(i==m)
        printf("");
   }
   return 0;
}