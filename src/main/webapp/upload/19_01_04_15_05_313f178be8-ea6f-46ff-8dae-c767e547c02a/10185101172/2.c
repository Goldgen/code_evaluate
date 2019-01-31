#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,k=0;
    scanf("%d+%d=%d",&a,&b,&n);
    int i,j=0;
    k=a;
    if(a+b==n)
        printf("0");
    for(i=0;i<10;i++)
    {
        k*=10;
        if(k+b==n)
        {   printf("%d",++i);
            break;}
    }
    if(!(k+b==n))
    {
        for(j=0;j<10;j++)
            {b*=10;
             if(a+b==n)
             {printf("-%d",++j);
                break;}}
    }

    return 0;
}
