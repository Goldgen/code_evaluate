#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i,la=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=(n-1);++i)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<=(n-1);++i)
    {
        if(arr[i]==a)
        {
            la=1;
            printf("%d ",i);
        }
    }
     if(la==0)
        printf("ERROR");
    return 0;
}
