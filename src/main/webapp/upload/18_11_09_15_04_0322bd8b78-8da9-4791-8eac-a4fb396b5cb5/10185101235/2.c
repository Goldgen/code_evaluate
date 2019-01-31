#include <stdio.h>

int main(void)

{
    int n = 0;
    scanf("%d",&n);

    int i = 1;
    int line = 1;
    int spacecounter = 0;

    for(line=1;line<=n;line++)
    {
        spacecounter = 2*(n-line);
        for(i=1;i<=spacecounter;i++)
            printf(" ");

        for(i=1;i<=line;i++)
        {
            printf("%d",i);
            if(i!=line)
                printf("+");
        }
        i--;

        printf("=");

        for(i=line;i>=1;i--)
        {
            printf("%d",i);
            if(i!=1)
                printf("+");
        }
        if(line != n)
        printf("\n");
    }
}
