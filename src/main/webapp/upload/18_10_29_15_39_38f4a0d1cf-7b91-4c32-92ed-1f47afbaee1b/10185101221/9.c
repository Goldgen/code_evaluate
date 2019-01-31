#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,j;
    scanf("%d",&n);
        for (int i =1;i <= n;i++)
        {
            k = 1;
            for(j = 1;j <i;j++)
             {
               printf("%d ",k);
               k = k*(i-j)/j;
             }
             if (i < n)
            printf("1\n");
            else
                printf("1");
        }
    return 0;
}
