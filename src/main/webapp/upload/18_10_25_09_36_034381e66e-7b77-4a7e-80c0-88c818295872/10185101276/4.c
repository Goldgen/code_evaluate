#include <stdio.h>
int main()
{
    int n=0,i=1,a=1;
    scanf("%d",&n);
    while (a<=n)
    {
        if (1==a)
          for (;i<=n;i++)
         {
              if(i==n)
                 printf("*\n");
              else printf("*");
         }
       else if (a==n)
        for (;i<=n;i++)
         {
             printf("*");
         }
       else for (;i<=n;i++)
           {
              if(1==i)
                printf("*");
              else if(i==n)
                printf("*\n");
              else printf(" ");
           }
           a+=1;
           i=1;

    }
    return 0;
}