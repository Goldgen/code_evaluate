#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=i;
        space=n-i;
        while(space>0)
        {
            printf("  ");
            space--;
        }
        for(j=1;j<=4*i-1;j++)
        {
            if(j<2*i)
            {
                if(j%2==0)
                    printf("+");
                else
                    printf("%d",(j+1)/2);
            }
            else if(j==2*i)
                printf("=");
            else
            {
                if(j%2==0)
                    printf("+");
                else
                    printf("%d",2*i-j/2);
            }
        }
        if(i<n)
            printf("\n");
    }
    return 0;
}
