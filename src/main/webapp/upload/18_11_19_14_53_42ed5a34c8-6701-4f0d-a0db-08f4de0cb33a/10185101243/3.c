#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a[100];

    int i,j;
    for(i=0;i<=100;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0)
            continue;
        else
            break;
    }
    for(j=i-1;j>=1;j--)
    {
        printf("%d ",a[j]);
    }
    
        printf("%d",a[0]);
return 0;
}
