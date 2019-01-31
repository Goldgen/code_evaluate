#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    char c='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%c",c+i-1);
            printf("\n");
    }
   for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=2*(n-i)-1;j++)
            printf("%c",c+i+n-1);
           if (i<n-1) printf("\n");
           if (i==n-1) printf("");
    }
   return 0;
}
