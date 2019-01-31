#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2];
    int max,min,mid,i,sum;

    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    max = a[0];
    min = a[0];
    sum = a[0]+a[1]+a[2];
    for(i=0;i<=2;i++)
    {
        if(a[i]>max)
            {max=a[i];}
        if(a[i]<min)
            {min=a[i];}
    }
        mid=sum-max-min;



        printf("%d",mid);


    return 0;
}
