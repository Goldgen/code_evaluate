#include <stdio.h>
int main()
{
    int num,x,y,j=0,i=0;

    scanf("%d",&num);
    printf("%d",num);
    for(x=2;x<=num/2;x++)
    {
        for(i=2;i<x;i++)
        {
            if(0==x%i)
                break;
            if (x==i+1)

            {
                y=num-x;
                for(j=2;j<y;j++)
                {
                    if(0==y%j)
                       break;
                }
                  if(y==j)
                    printf("=%d+%d",x,y);
            }
        }
}
    return 0;
}

