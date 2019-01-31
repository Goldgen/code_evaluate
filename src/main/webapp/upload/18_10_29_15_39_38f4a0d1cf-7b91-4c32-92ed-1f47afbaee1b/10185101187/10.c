#include <stdio.h>

int main()
{
     int n, m, i, j, k;
     scanf("%d", &n);

     m=1;
     for(i=1; i<=n; i++)
        m = m*2;
     m--;
     for(i=0; i<=m; i++)
     {
         if(i==0)
            printf("{");
         else
            printf("\n{");
         j = i;
         k = 0;
         while(j!=0)
         {
             if(j%2==1)
                printf("%d,", k);
                k++;
                j/=2;
         }
         if(i==0)
            printf("}");
         else
            printf("\b}");
     }
}

