#include<stdio.h>

int main()
{
    int n=0;
    int i=0;
    int j=0;
    scanf("%d",&n);
    for (j=1; j<=n; j++)
    {
    
    for (i=1; i<=j; i++)
     {
        printf(" %d * %d = %2.d",i,j,i*j);
       
     }
        if(j<n)
        printf("\n");
    }
    
    return 0;
}
