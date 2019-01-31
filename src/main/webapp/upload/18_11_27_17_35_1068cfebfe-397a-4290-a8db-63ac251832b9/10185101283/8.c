#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d[n];
    int x[n-1];
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);
    int a=1;
    int b=0;
    for(int i=0;i<n-1;++i,++b)
    {
        if(d[i]==d[i+1])
            ++a;
        else
            a=1;
        x[b]=a;
    }
    for(int i=0;i<n-1;++i)
    {
        int c=0;
        for(int j=0;j<n-1;++j)
        {
            if(x[j]>x[j+1])
            {
                c=x[j];
                x[j]=x[j+1];
                x[j+1]=c;
            }
        }
    }
    if(n==1)
        printf("%d",1);
    else
       printf("%d",x[n-2]);
    return 0;
}
