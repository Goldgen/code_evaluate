#include <stdio.h>
#include <stdlib.h>

extern int b;
int main()
{
    int a=0,b=0,i=0,j=0;
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
        for(j=0;j<i+1;++j)
        {
            b=(i+1)*(j+1);
            printf("%2d *%2d =%3d",j+1,i+1,b);
        }
        if(i==a-1)
            ;
        else
            printf("\n");
    }
    return 0;
}
