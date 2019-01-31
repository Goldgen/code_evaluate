#include <stdio.h>

int mul(int r, int l)
{
    return r*l;
}

int main()
{
    int l, r, n;
    scanf("%d", &n);

    for(l=1; l<=n; l++)
    {
        for(r=1; r<=l; r++)
        {
            if(mul(r,l)<10)
                printf(" %d * %d =  %d", r, l, mul(r,l));
            else
                printf(" %d * %d = %d", r, l, mul(r,l));

            if(r==l && l!=n)
                printf("\n");
        }
    }
}
