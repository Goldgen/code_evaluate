#include <stdio.h>
#include <stdlib.h>

int list[1000];

int main()
{
    int n,i,x,y,z;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        list[x]=x;
    }
    for(y=1;y<=n;y++)
    {
        for(i=1;i<=2*(n-y);i++)
        {
            printf(" ");
        }
        for(z=1;z<=y;z++)
        {
            printf("%d",list[z]);
            if(z==y)
            {
                printf("=");
            }
            else
            {
                printf("+");
            }
        }
        for(z=y;z>=1;z--)
        {
            printf("%d",list[z]);
            if(z==1)
            {
                if(y==n)
                {
                    break;
                }
                else
                {
                    printf("\n");
                }
            }
            else
            {
                printf("+");
            }
        }
    }
    return 0;
}
