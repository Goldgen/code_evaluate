#include<stdio.h>
int main()
{
    int n,i,v;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(v=1;v<=i;v++)
        {
            if(1==v)printf(" ");
            printf("%d * %d =%3d",v,i,i*v);
            if(v!=i)printf(" ");
            if(v==i&&i!=n)printf("\n");
        }
    return 0;
}