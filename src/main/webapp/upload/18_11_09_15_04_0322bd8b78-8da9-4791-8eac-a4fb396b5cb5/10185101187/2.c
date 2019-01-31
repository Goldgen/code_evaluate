#include <stdio.h>

int main()
{
    int n, l, r;
    scanf("%d", &n);
    
    for(l=1; l<=n; l++)
    {
        for(r=1; r<=(n-l)*2; r++)
            printf(" ");
        for(r=(n-l)*2+1; r<n*2; r+=2)
            {
                printf("%d", (r-n+l)/2);
                if((r-n+l)/2==l)
                    printf("=");
                else
                printf("+");
            }
        for(r=n*2+1; r<=(n+l-1)*2+1; r+=2)
        {
            printf("%d", )
        }
    }
}