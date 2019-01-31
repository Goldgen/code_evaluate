#include <stdio.h>
#include <stdlib.h>
int lala(int a)
{
    return a/10;
}

int main()
{
   int n;int a[100];int i;int sum=0;int j;
   scanf("%d",&n);
   for(i=0; ;++i)
   {
       if(n>0)
       {
           a[i]=n%10;
           n=lala(n);
       }
       if(n==0)
        break;

   }
   for(j=0;j<=i;j++)
   {
       sum+=a[j];
   }
    printf("%d",sum);

}
