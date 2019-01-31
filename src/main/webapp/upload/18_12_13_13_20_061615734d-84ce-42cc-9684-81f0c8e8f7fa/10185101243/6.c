#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,m,i;
    scanf("%d%d\n",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i+m<n)
        {
            a[i+m]=b[i];
        }
        else{
            a[i+m-n]=b[i];
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);

    }
    printf("%d",a[n-1]);
    return 0;
}
