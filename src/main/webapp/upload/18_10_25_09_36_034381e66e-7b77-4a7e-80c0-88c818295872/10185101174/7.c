#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d",&n);
    int b=n-2;
    int p=1;
    if((n>=7)&&(n<100)&&(n%2==1))
 {
    for(int a=0;a<(n-1)/2;++a)
      {
        printf(" ");
      }
    printf("*");

    for(int j=0;j<b-1;++j)
    {
        printf("\n");
        for(int i=(n-3)/2+1;i<b;i++)
         {
         printf(" ");
         }
         printf("*");
         for(int m=0;m<p;m++)
         {
             printf(" ");
         }
         p+=2;
         printf("*");

         b=b-1;
    }
   printf("\n");

   for(int c=0;c<n;c++)
   {
       printf("*");
   }
 }
}


