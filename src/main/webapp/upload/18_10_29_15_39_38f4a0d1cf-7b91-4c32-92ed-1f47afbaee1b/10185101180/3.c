#include <stdio.h>
int main()
{
    int x,y,z,a,b,i,j;
    scanf("%d",&x);
    printf("%d",x);
    for(a=3;a<=x/2;a++)
    {
        y=0;
        z=0;
        b=x-a;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
                y++;
        }
            for(j=2;j<b;j++)
            {
                if(b%j==0)
                    z++;
            }

        if(y==0&&z==0)
            printf("=%d+%d",a,b);
    }
    return 0;
}