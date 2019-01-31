#include <stdio.h>

int main()
{
    int a=0;
    int i=0;
    int j=0;
    int s=0;
    int m=0;
    scanf("%d",&a);


    s=2*a-2;

     for(i=1;i<=s;i++)
     printf(" ");

    printf("1=1\n");

     for(j=2;j<=a;j++)
     {
         m=2*a-2*j;

         for(i=1;i<=m;i++)

         {

             printf(" ");
         }
         printf("1");
         for(i=2;i<=j;i++)
         printf("+%d",i);
         printf("=");
         for(i=j;i>1;i--)
            printf("%d+",i);
            if(j<a)
         printf("1\n");
         else
            printf("1");

     }

    return 0;
}
