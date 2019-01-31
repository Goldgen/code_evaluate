#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;++i)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
               {
                   int m=a[j];
                   a[j]=a[j+1];
                   a[j+1]=m;
               }

        }
    }
    for(int i=0;i<n-1;++i)
        printf("%d ",a[i]);
	printf("%d",a[n-1]);
}
