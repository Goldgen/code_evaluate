#include <stdio.h>
int main()
{
    int m,n;
    m = 1;
    int p;
    p = 1;
    scanf("%d",&n);
    while(m<=n)
    {
        while(p<=m)
        {
            if(m==n)
           printf("*");
            else
                  {
                if(p%m==1)
                    printf("*");
                else if(p%m==0)
                    printf("*\n");
                else
                    printf(" ");
            }

            p++;
        }
        m++;
        p = 1;

    }
    return 0;
}
