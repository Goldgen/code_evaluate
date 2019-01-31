#include <stdio.h>
#include <stdlib.h>
void multiply(int n)
{
    int i,j;
    i=0;
    j=0;
for(i=1;i<=n;i++)
        {for(j=1;j<=i;j++)
         {
             printf("%2d *%2d =%3d",j,i,i*j);
          }
          printf("\n");
         }
}
int main()
{
 int n;
 scanf("%d",&n);
 multiply(n);
    return 0;
}
