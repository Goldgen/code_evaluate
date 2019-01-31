#include <stdio.h>

int main()
{
    int n, l1, l2, r;
    char x = 'A', y;
    scanf("%d", &n);

    for(l1=1; l1<=n; l1++)
    {
        for(r=1; r<=(n+l1-1); r++)
            {
            if(r<=(n-l1))
                printf(" ");
            else if(r==(n+l1-1))
                printf("%c\n", x);
            else
                printf("%c", x);
            }
        x++;
        y = x;
        l2 = l1;
    }

    for(l2=l2+1, y=y+1; l2<=(2*n-1); l2++)
    {
        if(l2==(2*n-1))
        {
            for(r=1; r<=(3*n-l2-1); r++)
            {
            if(r<=(l2-n))
                printf(" ");
            else
                printf("%c", y);
            }
        }
        else
        {
            for(r=1; r<=(3*n-l2-1); r++)
            {
            if(r<=(l2-n))
                printf(" ");
            else if(r==(3*n-l2-1))
                printf("%c\n", y);
            else
                printf("%c", y);
            }
        }
        y++;
    }
}
