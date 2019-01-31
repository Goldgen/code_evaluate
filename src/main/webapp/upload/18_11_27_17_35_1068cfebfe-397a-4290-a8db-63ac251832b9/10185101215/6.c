#include<stdio.h>
#include<math.h>
int main()
{
    int a[1024],z[1024],y,x,i,b,j,c=0;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        a[i]=y;
    }
    scanf("%d",&b);
    for(i=0;i<x;i++)
    {
        if(b==a[i])
        {
            c++;
            for(j=0;j<i;j++)
                z[j]=a[j];
            for(j=i;j<x;j++)
            z[j]=a[j+1];
            for(j=0;j<x-1;j++)
            {if(j<x-2)
                printf("%d ",z[j]);
                else
                 printf("%d",z[j]);
        }
        }

    }
    if(c==0)
        printf("ERROR");
    return 0;
}
