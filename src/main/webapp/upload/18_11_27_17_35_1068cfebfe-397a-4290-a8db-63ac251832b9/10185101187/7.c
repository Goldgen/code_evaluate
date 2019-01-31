#include <stdio.h>

int main()
{
    int n, i, j=0, x, d=0;
    scanf("%d", &n);
    int a[n], c[100];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    for(i=0; i<n; i++)
        if(a[i]==x)
            {
                d = 1;
                c[j] = i;
                j++;
            }
    if(d==0)
        printf("ERROR");
    else
        for(i=0; i<j; i++)
        {
            if(i!=0)
                printf(" ");
            printf("%d", c[i]);
        }
}
