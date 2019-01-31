#include <stdio.h>
#include <math.h>

int main (void)

{
    int n = 0;
    int line = 1;
    int i = 1;

    scanf("%d",&n);

    for(line = 1;line<=2*n-1;line++)
    {
        for(i=1;i<=fabs(line-n);i++)
            printf(" ");
        for(i=1;i<=-fabs(2*line-2*n)+2*n-1;i++)
            printf("%c",line+64);
        if(line != 2*n-1)
            printf("\n");
    }
}

