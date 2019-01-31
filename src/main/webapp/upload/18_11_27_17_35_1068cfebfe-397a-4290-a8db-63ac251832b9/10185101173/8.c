#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,j=0,a=0,max=0;
    scanf("%d",&n);
    int arr[n],m[n];
    for(int i=0;i<n;++i)
        m[i]=1;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;++i)
    {
        a=arr[i];
        if(a==arr[i+1])
            ++m[j];
        else
            ++j;
    }
    max=m[0];
    for(int i=0;i<j;++i)
    {
        if(m[i+1]>m[i])
            max=m[i+1];
    }
    printf("%d",max);
    return 0;
}
