#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        if(i == 1 || i == 2)
        {
            for (int t =1;t<=i;t++)
          {
            if (t == i)
                printf("*\n");
            else
                printf("*");
          }
        }
        else if(i==n)
        {
            for (int t =1;t<=i;t++)
                printf("*");
        }

        else
        {
           for (int x=1;x<=i;x ++)
           {
               if (x==1)
               printf("*");
               else if(x==i)
                printf("*\n");
               else
                printf(" ");
           }
        }
    }
    return 0;
}
