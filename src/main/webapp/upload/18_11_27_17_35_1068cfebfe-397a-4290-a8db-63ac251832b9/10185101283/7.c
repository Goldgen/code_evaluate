#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    int i=0;
    while(i<n)
    {
        scanf("%d ",&a[i]);
        ++i;
    }
    scanf("%d",&x);
    int b=0,d=0;
    int c[100];
    while(b<n)
    {
        if(a[b]==x)
        {
            c[d]=b;
            ++d;
        }
         ++b;
    }
    if(d==0)
        printf("ERROR");
    else
    {
        int e=0;
        while(e<d-1){
            printf("%d ",c[e]);
            ++e;
        }
        printf("%d",c[e]);
    }
    return 0;
}
