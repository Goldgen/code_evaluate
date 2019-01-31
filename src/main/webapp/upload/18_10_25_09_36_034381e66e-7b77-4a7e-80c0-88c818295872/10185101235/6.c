#include <stdio.h>

int main (void)

{
    int n = 0;
    int line = 1;
    int row = 1;

    scanf("%d",&n);

    for(line = 1;line <= n;line++)
    {
        if (line == 1 || line == n)
        {
            for(row = 1;row <= line;row++)
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
            for(row = 2;row < line;row++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            row = 1;
        }
    }
    return 0;
}
