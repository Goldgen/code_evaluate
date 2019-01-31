#include <stdio.h>
int main(void)
{
    int n,i=1,j=1;
    scanf("%d",&n);
    printf("*\n");
    for(i=2;i<n;i++)
    {
           for(j=1;j<=n;j++)
           {
            if(j==1)printf("*");
            else if(i==j) printf("*\n");
            else if(j<i) printf(" ");
           }
    }
    for(j=1;j<=n;j++) printf("*");
    
    return 0;
}
