#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    int max,i;

    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    max = a[0];

    for(i=0;i<=3;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
        printf("%d",max);


    return 0;
}