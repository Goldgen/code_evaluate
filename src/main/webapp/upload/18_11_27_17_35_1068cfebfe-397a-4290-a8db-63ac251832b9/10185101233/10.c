#include<stdio.h>
int main()
{
    int n;
    int a;
    int count=0;
    int k;
    int i=0;
    int j=0;
    scanf("%d\r",&n);
    int shu[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        shu[i]=a;
    }
    while(count<n-1)
    {
        for(int i=0;i<n-1;i++)
        {
            if(shu[i]>=shu[i+1])
            {
                k=shu[i];
                shu[i]=shu[i+1];
                shu[i+1]=k;
            }
        }
        count++;
    }
    while(j<n-1)
    {
        printf("%d ",shu[j]);
        j++;
    }
        printf("%d",shu[j]);
    return 0;
}