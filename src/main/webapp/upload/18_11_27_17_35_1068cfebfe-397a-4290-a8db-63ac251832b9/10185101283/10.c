#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;++i)
    {
        int c=0;
        for(int j=0;j<n-1;++j)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    int f=0;
    while(f<n-1)
    {
        printf("%d ",a[f]);
        ++f;
    }
    printf("%d",a[f]);
    return 0;
}