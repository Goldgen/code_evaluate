#include <stdio.h>

int main()
{
    int n,i,j;
    char letter='A';
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=abs(n-i)&&j<n)
                printf(" ");
            else if(j<2*n-abs(n-i))
                printf("%c",letter);
        }
        if(i<2*n-1)
            printf("\n");
        letter++;
    }
    return 0;
}
