#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=(n-1)/2;i++)
   printf(" ");
   printf("*\n");
   for(int i=2;i<=(n-1)/2;i++)
   {for(int a=0;a<(n+1)/2-i;a++)
   printf(" ");printf("*");
   for(int k=1;k<=(i-1)*2-1;k++)
   printf(" ");
   printf("*\n");}
   for(int i=1;i<=n;i++)
   printf("*");

}
