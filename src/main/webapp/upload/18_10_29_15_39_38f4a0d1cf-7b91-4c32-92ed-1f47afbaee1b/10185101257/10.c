#include <stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    m=1;
    for (i=1;i<=n;i++)
        m=m*2;
    m--;
    for (i=0;i<=m;i++)
    {
        printf("{");
        j=i;
        k=0;
        while (j!=0)
        {
            if (j%2!=0)
            {
                printf("%d",k);
                if(j!=1&&j!=0)
                    printf(",");
            }
            k++;
            j/=2;
        }
        printf("}");
        if(i<m)
            printf("\n");
    }
}
