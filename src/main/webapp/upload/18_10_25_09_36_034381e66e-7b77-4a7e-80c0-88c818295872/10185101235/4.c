#include <stdio.h>

int main(void)

{
    int n = 0;
    scanf("%d",&n);
    int line = 1;
    int row = 1;

    for (line = 1;line <= n;line++)
    {
        if (line == 1 || line == n)
        {
            for(row = 1;row <= n;row++)
            {
                printf("*");
            }
            if(line == 1){printf("\n");}
            row = 1;
        }
        else
        {
            printf("*");
            row++;
            for(row = 2;row <= n-1;row++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            row = 1;
        }
    }
}
