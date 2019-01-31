#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m = (int)pow(2, n);
    unsigned int i, j;
    for(i = 0; i < m; i++)
    {
        printf( "{" );
        unsigned int temp = i;
        int flag = 0;
        for(j = 0; j < n; j++)
        {
            if(temp % 2)
            {
                printf("%u", j);
                flag = 1;
            }
            temp /= 2;
            if(flag && temp)
            {
                printf( "," );
                flag = 0;
            }
        }
        printf( "}" );
        if(i != m - 1)
            printf( "\n" );
    }
    return 0;
}
