#include <stdio.h>

int main()
{
    int n, i, j, x, c=0;
    scanf("%d", &n);
    int a[n], b[n-1];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    for(i=0; i<n; i++)
        if(a[i]==x)
            {
                c = 1;
                break;
            }

    if(c==0)
        printf("ERROR");
    else
    {
        for(j=0; j<n-1; j++)
            {
                if(j<i)
                    b[j] = a[j];
                else
                    b[j] = a[j+1];
            }
            for(j=0; j<n-1; j++)
            {
                if(j!=0)
                    printf(" ");
                printf("%d", b[j]);
            }
    }
}
