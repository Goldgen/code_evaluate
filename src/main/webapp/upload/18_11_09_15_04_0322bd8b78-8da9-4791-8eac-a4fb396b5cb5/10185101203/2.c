#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c,i,j,t=0,d;
    scanf("%d",c);
    for(i=1;i<=c;i++)
        for(j=1;j<=2*c+2*i-1;j++)
    {
        for(d=0;d<c;d++)
            {if(j==2*c-2*i+2*d+1&&j==2*c+2*i-2*d-1)
            printf("%d",t+1);}
        if(j%2==0&&j!=2*c)
            printf("+");
        if(j==2*c)
            printf("=");
        if(j=2*c+2*i-1)
            printf("/n");

        else
                printf(" ");

    }
}