#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n = 1;
    scanf("%d",&i);
    while(n<=i)
    {
        if(n==1||n==i)
        {
            int m = 1;
            while(m<=i)
                {
                    printf("*");
                    m++;
                }


        }
        else
        {
            int a = 1;
            while(a<=i)
            {
                if(a==1||a==i)
                    printf("*");
                else
                    printf(" ");
                a++;
            }
        }
        printf("\n");
        n++;

    }

    return 0;
}