#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   char a='A';
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<n-i;j++)
       {
           printf(" ");
       }
       for(int k=0;k<2*i-1;k++)
       {
           printf("%c",a+i-1);
       }
       printf("\n");
   }
   for(int o=n-1;o>0;o--)
   {
       for(int p=0;p<n-o;p++)
        printf(" ");
       for(int q=0;q<2*o-1;q++)
        printf("%c",a-1+n+n-o);
        if(o!=1)
       printf("\n");
   }

}