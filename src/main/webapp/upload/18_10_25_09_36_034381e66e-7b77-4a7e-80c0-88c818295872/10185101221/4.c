#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n;i ++)
    {
        if (i == 1)
         {
           for(int a=1; a <= n;a++)
           {
               if(a == n)
               printf("*\n");
               else
                printf("*");
           }
         }
		else if(i == n)
        {

            for(int a=1; a <= n;a++)
			printf("*");
        }
         else
         {
            for(int b=1; b <= n;b++)
            {
                if (b ==1)
                    printf("*");
                else if (b == n)
                    printf("*\n");
                else
                    printf(" ");

             }
         }
    }
    return 0;
}
