#include <stdio.h>
#include <stdlib.h>

void Fuck(int n)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
         printf(" %d",j);
         printf(" *");
         printf(" %d",i);
         printf(" =");
         printf(" %2d",i*j);
         if((i==j)&&(i!=n))
         {
             printf("\n");
         }
    }
}

}

int main()
{
    int n;
    scanf("%d",&n);
    Fuck(n);
    return 0;
}
