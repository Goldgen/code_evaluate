#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{int n;
scanf("%d",&n);

for(int i=1;i<=2*n-1;i++)
{
    char st=64+i;
    int m=fabs(i-n);
    for(int j=1;j<=m;j++)
    {
        printf(" ");
    }
    for(int q=1;q<=2*n-1-2*m;q++)
    {
        printf("%c",st);
    }
    printf("\n");
}

    return 0;
}
