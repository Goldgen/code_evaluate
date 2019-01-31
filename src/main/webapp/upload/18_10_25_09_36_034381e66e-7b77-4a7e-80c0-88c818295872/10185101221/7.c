#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0 ;
    scanf("%d",&n);
    int high = (n + 1) /2;
    for (int a = 1;a<=high;a++)
    {
        if(a == 1)
        {
            for(int b = 1;b<=high;b++)
            {
                if(b==high)
                    printf("*\n");

                else
                    printf(" ");
            }
        }
        else if (a == high)
        {
            for(int c = 1;c<=n;c++)
                printf("*");
        }
        else
        {
            for(int d = 1;d<=high + a - 1;d++)
            {
                if (d == high - a +1)
                    printf("*");
                else if(d == high + a - 1)
                    printf("*\n");
                else
                    printf(" ");
            }
        }
    }
    return 0;
}
