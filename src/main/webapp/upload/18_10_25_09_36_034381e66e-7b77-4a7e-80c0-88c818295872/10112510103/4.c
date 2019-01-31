// 10185101245

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i==1||i==n)
        for(j=1;j<=n;j++)
        printf("*");
       else{
        printf("*");
        for(j=2;j<=n-1;j++)
            printf(" ");
        printf("*");
       }
	   if(i != n)
       printf("\n");
   }


    return 0;
}
