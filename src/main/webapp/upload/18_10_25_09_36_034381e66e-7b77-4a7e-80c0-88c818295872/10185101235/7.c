#include <stdio.h>

int main(void)

{
    int n = 0;
    int line = 1;
    int row = 1;

    scanf("%d",&n);
    for (row = 1;row<(n+1)/2;row++)
    {
        printf(" ");
    }
    printf("*\n");
    line++;
    for(line = 2;line<(n+1)/2;line++)
    {
        for(row = 1;row<(n+1)/2-line+1;row++)
        {
            printf(" ");
        }
        printf("*");
        for (row = (n+1)/2-line+2;row<(n-1)/2+line;row++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    for(row=1;row<=n;row++)
    {
        printf("*");
    }
    return 0;

}
