#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,a,z;
    scanf("%d",&c);
    printf("%d",c);
    int i,j;
    for(a=1;a<=c/2;a++)
    {
        for(i=2;i<a;i++)
            if(a%i==0)break;
        if(i==a)
        {
            z=c-a;
            for(j=2;j<=z;j++)
                if(z%j==0)break;
               if(j==z)printf("=%d+%d",a,z);
        }
    }

    return 0;
}
