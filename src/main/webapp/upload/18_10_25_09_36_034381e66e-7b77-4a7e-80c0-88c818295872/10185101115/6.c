#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
scanf("%d",&n);
for(int i=1;i<n;i++)
{
    if(i==1)
    {
        printf("*\n");
    }
    else
    {printf("*");
    for(int j=1;j<=i-2;j++)
    {
        printf(" ");
    }
    printf("*\n");
}
}
for (int i=1;i<=n;i++)
{
    printf("*");
}
    return 0;
}
